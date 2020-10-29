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
	set<set<string>> sinonims;
	int N;
	cin >> N;
	set<string> temp; 
	string command;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "ADD") {
			//temp.clear();
			createSet(temp);
			//string word1, word2;
			//cin >> word1 >> word2;
			//temp.insert(word1);
			//temp.insert(word2);
			sinonims.insert(temp);
		}

		if (command == "COUNT") {
			int sum = 0;
			string word;
			cin >> word;


			for (const set<string>& x : sinonims) {
				if(x.count(word)){
					sum++;
				}
				

				/*
				for (const string& st : x) {
					if(st==word){
						sum++;
					}
				}
				*/
			}
			cout << sum << endl;
		}
		if (command == "CHECK") {
			bool flag = false;
			createSet(temp);
			//string word1, word2;
			//cin >> word1 >> word2;

			for (const set<string>& x : sinonims) {
				if (x==temp) {
					cout << "YES" << endl;
					flag = true;
					break;
				}
			}
			if (!flag) { cout << "NO" << endl; }
		}
	}

	system("pause");
	return 0;
}
