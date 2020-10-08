#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int f;
	string str;
	cin >> str;
	int i = 0;
	int sum = 0;
	for (auto c : str) {
		if (c == 'f') {
			sum++;
			if (sum ==2) f = i;
		}
		i++;
	}
	if (!sum) cout << -2;
	if (sum==1) cout << -1;
	if (sum>1) cout << f;

	system("pause");
	return 0;
}
