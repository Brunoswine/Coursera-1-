#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Список дел,наконец сделал ааааа Неделя 2



int main() {
	int N;
	bool f;
	int sum = 0;
	cin >> N;
	int command;
	int k;
	int current_month = 0;
	string s;
	string strCommand;
	vector<int> day_in_month = {32,29,32,31,32,31,32,32,31,32,31,32};
	vector<vector<string>> LIST(32);
	for (int i = 0; i < N; i++) {
		f = false;
		cin >> strCommand;
		if (strCommand == "ADD") {
			cin >> k >> s;
			LIST[k].push_back(s);
		}
		if (strCommand == "DUMP") {
			cin >> k;
			cout << LIST[k].size()<<" ";
			for (int i = 0; i < LIST[k].size();i++) {
				cout << LIST[k][i]<<" ";
			}
			cout << endl;
		}

		if (strCommand == "Quit") {
			f = true;
		}
		if (f) break;
		
		
		if (strCommand == "NEXT") {
			current_month++;
			int day_in_this;
			int day_in_pred;
			if (current_month > 11) { current_month = 0; 
			day_in_pred = 32;
			}
			else { day_in_pred = day_in_month[current_month - 1]; }
			 day_in_this = day_in_month[current_month];
		 
			vector<vector<string>> tmp = LIST;
			LIST.resize(day_in_this);
			if (day_in_this < day_in_pred) { //если в этом месяце дней меньше, чем в предыдущем
				int raznica = day_in_pred - day_in_this;
				for (int i = 0; i < raznica; i++) {
					/*vector<string> temp; // создадим одинарный вектор того дня, что нужно запушить в последний день и заполним его словами
					for (int j = 0; j < tmp[day_in_pred - i-1].size(); j++) {
						temp.push_back(tmp[day_in_pred - i-1][j]);
					}*/
					for (string c : tmp[day_in_pred - i - 1]) { // 
						LIST[day_in_this-1].push_back(c);
					}
				}
			} 

		}

	}
	
	



	//system("pause");
	return 0;
}
