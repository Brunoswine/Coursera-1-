#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

//—правочник столиц, Ќедел€ 2


bool countryExists(const map<string, string>& m, const string& country) {  //True, если така€ страна существует, ссылки, чтобы не копировать
	bool f = false;
	for (auto &x : m) {
		if (x.first == country)
			f = true;
	}
	return f;
}

vector<string> busesSearch(map<string, vector<string>>& m, const string& stop, vector<string>& orderOfCreation){
	vector<string> result;
	for ( string& str : orderOfCreation) {
		for ( string& st : m[str]) {
			if (st == stop) {
				result.push_back(str);
			}
		}
	}
	return result;
}
//¬место countryExists можно использовать CapMap.count(country) == 0 / CapMap.count(country) == 1


int main() {
	int N;
	cin >> N;
	string command;
	string bus;
	vector <string> orderOfCreation; // вектор пор€дка создани€ маршрутов
	map<string, vector<string>> route;

	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command == "NEW_BUS") {
			int stop_count;
			cin >> bus;
			cin >> stop_count;
			orderOfCreation.push_back(bus);
			string stop1;
			vector<string> stops;
			for (int j = 0; j < stop_count; j++) {
				cin >> stop1;
				stops.push_back(stop1);
			}
			route[bus] = stops;
		}
		if (command == "BUSES_FOR_STOP") { //–еализуем поиск, в каждом элементе словар€ route (номер маршрута), пройдемс€ по каждой остановке, и, если эта остановка совпадает с запрашиваемой, вывести номер маршрута.
			bool flag = false;             // x.first - номер автобуса, x.second - вектор с остановками
			string stop;
			cin >> stop;

			for (string& str : orderOfCreation) {
				for (string& st : route[str]) {
					if (st == stop) {
						cout << str << " ";
						flag = true;
					}
				}
			}
			/*
			for (const auto & x : route) {
				for (string st : x.second) {
					if (st == stop) { 
						cout << x.first<<" "; 
					flag = true; }
				}
			}
			*/
			if (flag) {
				cout << endl;
			}
			if (!flag) {
				cout << "No stop" << endl;
			}
		}

		if (command == "STOPS_FOR_BUS") {
			bool fl = false;
			string bus;
			cin >> bus;
			if (route.count(bus) == 0) {
				cout << "No bus" << endl;
				fl = true;
			}
			if (fl) continue;


			for (string &stop : route[bus]) { // »терирумес€ по вектору остановок
				vector<string> buses = busesSearch(route, stop, orderOfCreation);  //создаем вектор пересечений остановки с другими маршрутами(пересадки)
				int index = 0;
				for (int i = 0; i < buses.size(); i++) {  // удаление исходного автобуса
					if (buses[i] == bus){
						index = i;
						break;
					}
				}
				buses.erase(buses.begin()+index);
				cout <<"Stop "<< stop<<": ";
				if (buses.size() == 0) {
					cout << "no interchange"<<endl;
				}
				else {
					for (string& buss : buses) {
						cout << buss << " ";
					}
					cout << endl;
				}
			}
		}
		if (command == "ALL_BUSES") {
			bool fl = false;
			if (route.count(bus) == 0) {
				cout << "No buses" << endl;
				fl = true;
			}
			if (fl) continue;

			for (auto& x : route) {
				cout << "Bus " << x.first << ": ";
				for (string st : x.second) {
					cout << st << " ";
				}
				cout << endl;
			}
		}

		
		
	}
	system("pause");
	return 0;
}
