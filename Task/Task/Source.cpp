#include <iostream>
#include <set>
#include <string>
#include <map>

using namespace std;

set<string> BuildMapValuesSet(const map <int, string>& m) {
	set<string> s;
	for (const auto& x : m) {
		s.insert(x.second);
	}
	return s;
}
//Количество уникальных строк, Неделя 2

int main() {
	set<string> values = BuildMapValuesSet({
	{1, "odd"},
	{2, "even"},
	{3, "odd"},
	{4, "even"},
	{5, "odd"}
		});

	for (const string& value : values) {
		cout << value << endl;
	}

	system("pause");
	return 0;
}
