#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Перемещение строк, Неделя 2


void MoveStrings(vector<string> &source, vector<string> &destination) {
	for (string c : source) {
		destination.push_back(c);
	}
	source.clear();
}



int main() {
	vector<string> source = {"a","b","c"};
	vector<string> destination = {"z"};
	MoveStrings(source, destination);
	for (string c : source) {
		cout <<"source  "<< c << " " << endl;
	}
	cout << "destination ";
	for (string d : destination) {
		cout << d << ",";
	}
	//system("pause");
	return 0;
}
