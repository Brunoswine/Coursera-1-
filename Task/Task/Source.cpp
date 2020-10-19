#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Разворот последовательности - 2, Неделя 2



void Reverse(vector<int>& vect) {
	vector<int> temp = vect;
	vect.clear();
	for (int x : temp) { // очищаем вектор
		vect.insert(vect.begin(),x); //вставляем в начало вектора число // первый параметр куда вставляем, второй - что имеено вставляем
	}
}

void ReverseCoursera(vector<int>& v) {
	int n = v.size();  // для удобства сохраним размер вектора в переменную n
	for (int i = 0; i < n / 2; ++i) {
		// элемент с индексом i симметричен элементу с индексом n - 1 - i
		// поменяем их местами с помощью временной переменной tmp
		int tmp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = tmp;
	}
}

vector<int> Reversed(const vector<int>& vect) {
	vector<int> temp;
	for (int x : vect) {
		temp.insert(temp.begin(), x); //вставляем в начало вектора число // первый параметр куда вставляем, второй - что имеено вставляем
	}
	return temp;
}

vector<int> ReversedCoursera(const vector<int>& input)
{
	vector<int> result;
	for (int i = input.size() - 1; i >= 0; --i) {
		result.push_back(input[i]);
	}
	return result;
}


int main() {
	vector<int> vect = {5,4,3};
	cout << "before"<<endl;
	for (auto c : vect) {
		cout << c <<", ";
	}
	cout << "after " << endl;
	for (auto c : Reversed(vect)) {
		cout << c << ", ";
	}
	system("pause");
	return 0;
}
