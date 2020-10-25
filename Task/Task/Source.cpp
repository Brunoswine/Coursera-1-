#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

//���������, ������ 2

map<char, int> BuildCharCounters(const string& s1){  // ������� ������� ������� ������� ��������(������� ��� ������ �����������) ��� ������ 
	map<char, int> m;
	for (char word : s1) {  //��������� � ��������������� ����� ������� ��� �� ��������� 0;
		m[word]++;
	}
	return m;
}

int main() {
	int N;
	cin >> N;
	string s1, s2;
	map<char, int> count1;
	map<char, int> count2;

	for (int i = 0; i < N; i++) {
		cin >> s1 >> s2;
		count1 = BuildCharCounters(s1);
		count2 = BuildCharCounters(s2);
		if (count1 == count2) {
			cout << "YES" << endl;
		} else 
			cout << "NO" << endl;

	}
	system("pause");
	return 0;
}
