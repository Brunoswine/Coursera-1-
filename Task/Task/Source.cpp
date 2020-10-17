#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Отбор палиндромов, Неделя 2

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

vector<string> PalindromFilter(vector<string> vect, int minLength) {
	string strReverse;
	vector<string> filtredVect;
	for (string str : vect) {
		if (str.size() < minLength) continue; //если меньше min длины, то пропускаем эту строку
		
		if (IsPalindrom(str)) {
			filtredVect.push_back(str);
		}
	}
	return filtredVect;
}

int main() {
	vector<string> vect = {"anna", "mamm", "madam", "ana" };
	int minLength = 3;
	vector<string>filtredVect = PalindromFilter(vect,minLength);
	for (string str : filtredVect) {
		cout << str << " ";
	}
	string str;
	cout << endl;
	cin >> str;
	cout << IsPalindromCoursera(str);
	system("pause");
	return 0;
}
