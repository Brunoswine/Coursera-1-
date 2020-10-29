#include <iostream>
#include <set>
#include <string>

using namespace std;

//Количество уникальных строк, Неделя 2

int main() {
	int N;
	cin >> N;
	string st;
	set<string> str;
	for (int i = 0; i < N; i++) {
		cin >> st;
		str.insert(st);
	}
	cout << str.size();
	system("pause");
	return 0;
}
