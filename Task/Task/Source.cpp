#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Очередь, Неделя 2



int main() {
	int N;
	bool f;
	int sum = 0;
	cin >> N;
	int command;
	string strCommand;
	vector<int> queue;
	for (int J = 0; J < N; J++) {
		f = false;
		cin >> strCommand;
		if (strCommand == "WORRY_COUNT") {
			for (int n : queue) {
				if (n == 1) sum++;
			}
			cout << sum << endl;
			sum = 0;
			f = true;
		}
		if(!f) cin >> command;
		if (strCommand == "WORRY") {
			queue[command] = 1;
		}
		if (strCommand == "QUIET") {
			queue[command] = 0;
		}
		if (strCommand == "COME") {
			if (command > 0) {
				for (int i = 0; i < command; i++) {
					queue.push_back(0);
				}
			}
			if (command < 0) {
				for (int i = 0; i < (command*-1); i++) {
					queue.pop_back();
				}
			}
		}
	}

	
	//system("pause");
	return 0;
}
