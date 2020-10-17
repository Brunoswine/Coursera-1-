#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string str){
	string strReverse=str;
	int size = str.size() - 1;
	if (str.size() == 0)return true;
	for (int i = 0; i <= size;i++) {
		strReverse[size - i] = str[i];
	}
	if (strReverse == str) {
		return true;
	}
	else return false;
}

bool IsPalindromCoursera(string s) {
	// Замечание: более правильным было бы использовать здесь тип size_t вместо int
	// О причинах Вы узнаете на Жёлтом поясе
	for (int i = 0; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	string str;
	cin >> str;
	cout << IsPalindrom(str);
	system("pause");
	return 0;
}
