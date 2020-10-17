#include <iostream>

using namespace std;

int Factorial(int N) {
	int sum = 1;
	if (N <= 0){
		return 1; 
	}


	for (int i = 1; i <= N; i++) {
		sum*= i;
	}
	return sum;
}

int FactorialRecurs(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return x * Factorial(x - 1);  // вычисляем факториал от x-1 и умножаем на x
	}
}


int main() {
	int a;
	cin >> a;
	cout << Factorial(a);
	system("pause");
	return 0;
}
