#include <iostream>
#include <set>
#include <string>
#include <map>

using namespace std;

//Синонимы, Неделя 2

void createSet(set<string>& temp) {
	temp.clear();
	string word1, word2;
	cin >> word1 >> word2;
	temp.insert(word1);
	temp.insert(word2);
	
}
int main() {
	map <string,set<string>> synonims;
	int N;
	cin >> N;
	set<string> temp; 
	string command;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "ADD") {
			string word1, word2;
			cin >> word1 >> word2;
			synonims[word1].insert(word2);
			synonims[word2].insert(word1);
			continue;
		}

		if (command == "COUNT") {
			int sum = 0;
			string word;
			cin >> word;
			if (synonims.count(word)) {
				cout << synonims[word].size() << endl;
				continue;
			}
			else {
				cout << 0 << endl;
				continue;
			}
		}

		if (command == "CHECK") {
			string word1, word2;
			cin >> word1 >> word2;
			if (synonims.count(word1)) {
				if (synonims[word1].count(word2)) {
					cout << "YES" << endl;
				}else {
					cout << "NO" << endl;
				}
			}else {
				cout << "NO" << endl;
			}
		}
		
	}
	
	system("pause");
	return 0;
}
