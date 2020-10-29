#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <map>

using namespace std;

//Автобусные маршурты - 3, Неделя 2
int main() {
	int N;
	cin >> N;
	set<string> temp;
	map<set<string>, int> route;
	for (int i = 0; i < N; ++i) {
		int q;
		cin >> q;
		string str;
		temp.clear();
		for (int i = 0; i < q; i++) {
			cin >> str;
			temp.insert(str);
		}
		if (route.count(temp) == 0) {
			int size = route.size() + 1;
			route[temp] = size; // обращение к элементу создает его
			cout << "New bus " << size << endl;
		}
		else {
			cout<< "Already exists for " << route[temp]<< endl;
		}
	}

	return 0;
	system("pause");
}
