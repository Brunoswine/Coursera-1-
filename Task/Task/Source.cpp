#include <iostream>

using namespace std;

int NOD(int a, int b) {
	int nod = 1;
	int buf;
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a == b)
		return a;
	if (a == 1 || b == 1)
		return 1;
	while (a != 0 && b != 0) {
		if (a % 2 == 0 && b % 2 == 0) {
			nod *= 2;
			a /= 2;
			b /= 2;
			continue;
		}
		if (a % 2 == 0 && b % 2 != 0) {
			a /= 2;
			continue;
		}
		if (a % 2 != 0 && b % 2 == 0) {
			b /= 2;
			continue;
		}
		if (a > b) {
			buf = a;
			a = b;
			b = buf;
		}
		buf = a;
		a = (b - a) / 2;
		b = buf;
	}
	if (a == 0)
		return nod * b;
	else
		return nod * a;
}


int main()
{
	int a, b;
	cin >> a >> b;
	cout << NOD(a, b);
	system("pause");
	return 0;
}
