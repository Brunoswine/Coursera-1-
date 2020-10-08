#include <iostream>


using namespace std;

int main()
{
	double skidka;
	double N, A, B, X, Y;
	cin >> N >> A >> B >> X >> Y;


	if (N > B) {
		skidka = N * (Y / 100);
		cout << N - skidka;
	}
	else
		if (N > A) {
			skidka = N * (X / 100);
			cout << N - skidka;
		}
		else cout << N;


	system("pause");
	return 0;
}
