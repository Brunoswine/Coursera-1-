#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Максимизатор, Неделя 2


void UpdateIfGreater(int a, int &b) {
	if (a > b) {
		b = a;
	}
}



int main() {
	int a, b;
	cin >> a >> b;
	cout << endl << "a=" << a << "b=" << b;
	UpdateIfGreater(7, b);
	cout << endl << "a=" << a << "b=" << b;
	system("pause");
	return 0;
}
