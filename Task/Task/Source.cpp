#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> vect;
	vector<int> invvect;
	int a,b,c,N;
	cin >> a;
	b = a;
	while (a!=0) {
		b = a % 2;
		a = a / 2;
			vect.push_back(b);
		
		
		 
	}
	string outStr;
	c = vect.size()-1;
	for (int i = c; i>-1; i--) {
		outStr += vect[i] + '0';
	}
	cout << outStr;

	system("pause");
	return 0;
}
