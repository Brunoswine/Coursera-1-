#include <iostream>
#include <string>
#include <vector>
using namespace std;

//�������� ������������������, ������ 2



void Reverse(vector<int>& vect) {
	vector<int> temp = vect;
	vect.clear();
	for (int x : temp) {
		vect.insert(vect.begin(),x); //��������� � ������ ������� ����� // ������ �������� ���� ���������, ������ - ��� ������ ���������
	}
}



int main() {
	vector<int> vect = {5,4,3};
	cout << "before"<<endl;
	for (auto c : vect) {
		cout << c <<", ";
	}
	Reverse(vect);
	cout << "after " << endl;
	for (auto c : vect) {
		cout << c << ", ";
	}
	system("pause");
	return 0;
}
