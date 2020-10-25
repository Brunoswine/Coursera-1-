#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

//���������� ������, ������ 2


bool countryExists(const map<string, string>& m, const string& country) {  //True, ���� ����� ������ ����������, ������, ����� �� ����������
	bool f = false;
	for (auto &x : m) {
		if (x.first == country)
			f = true;
	}
	return f;
}

//������ countryExists ����� ������������ CapMap.count(country) == 0 / CapMap.count(country) == 1


int main() {
	int N;
	cin >> N;


	string command,country,new_capital;
	bool f = false;
	map<string, string> CapMap;
	for (int i = 0; i < N; i++) {
		f = false;								//����� ����� 
		cin >> command;
		if (command == "CHANGE_CAPITAL") {
			cin >> country;
			cin >> new_capital;

			f = countryExists(CapMap,country);// ���� ����� ������ ����, �� ����� ��������, � �� ��������. ���� ��� ���� � ����, ���
	

			if (f) {
				const string& old_capital = CapMap[country]; //����� ��, �� �����������, � �������� ������ �� �������, ���� ��� ����� �� �������.
				if (new_capital == old_capital) { // ���� ������ ������
					cout << "Country " << country << " hasn't changed its capital" << endl;
				}
				else {
					cout << "Country " << country << " has changed its capital from " << old_capital << " to " << new_capital << endl;
					CapMap[country] = new_capital;
				}

			}

			if (!f) {
				CapMap[country] = new_capital;
				cout << "Introduce new country " << country << " with capital " << new_capital << endl;
			}

		}

		if (command == "RENAME") {
			string old_country_name, new_country_name;
			cin >> old_country_name >> new_country_name;
			if ((old_country_name == new_country_name) || (!countryExists(CapMap,old_country_name)) || (countryExists(CapMap, new_country_name))) { // Incorrect rename, skip, ���� ����� �������� ������ ��������� �� ������, ������ old_country_name �� ���������� ��� ������ new_country_name ��� ����������
				cout << "Incorrect rename, skip" << endl;
			}
			else{
				cout << "Country "<< old_country_name<<" with capital " << CapMap[old_country_name]<<" has been renamed to "<< new_country_name << endl;
				string temp = CapMap[old_country_name];
				CapMap.erase(old_country_name);
				CapMap[new_country_name] = temp;
			}

		}
		if (command == "ABOUT") {
			cin >> country;
			if (!countryExists(CapMap, country)) {
				cout << "Country " << country << " doesn't exist" << endl;
			}
			else { 
				cout << "Country " << country << " has capital " << CapMap[country] << endl;
			}
		}
		

		if (command == "DUMP") {
			if (CapMap.size() == 0) {
				cout<<"There are no countries in the world"<<endl;
			}
			for (const auto& x : CapMap) {
				cout << x.first << "/" << x.second << endl;
			}
		}


	}
	system("pause");
	return 0;

	
}
