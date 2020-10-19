#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Разворот последовательности - 2, Неделя 2



int main() {
	int n, avrg;
	int sum = 0;
	cin >> n;
	vector<int> vect(n);
	for (int &c : vect) {
		cin >> c;
		sum += c;
	}
	avrg = sum / n;
	vector<int> itog;
	for (int i = 0; i < vect.size();i++) {
		
		if (vect[i] > avrg) {
			itog.push_back(i);
		}
	}
	cout << itog.size() << endl;;
	for (int c : itog) {
		cout << c << " ";
	}
	system("pause");
	return 0;
}
