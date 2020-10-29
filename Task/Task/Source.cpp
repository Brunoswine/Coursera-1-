#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

//Автобусные остановки - 2, Неделя 2

int main() {
	bool flag;
	int N, Q;
	cin >> N;
	int num=1;
	int temp = 0;
	vector<string> stops;
	map<int, vector<string>> route;

	for (int i = 0; i < N; i++) {
		flag = false;
		cin >> Q;
		stops.clear();
		for (int j = 0; j < Q; j++) {
			string stop1;
			cin >> stop1;
			stops.push_back(stop1);
		}

		for (const auto & x : route) {  // Проверяем, существует ли такой маршрут  if (buses.count(stops) == 0)
			if (stops == x.second) {
				flag = true;
				temp = x.first;
			}
		}
		if (!flag) {
			route[num] = stops;
			cout << "New bus " << num << endl;
			num++;
		}
		else {
			cout << "Already exists for " << temp<<endl;
		}
	}
	system("pause");
	return 0;
}
