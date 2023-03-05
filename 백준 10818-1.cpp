// 최대, 최소 구하기

#include <iostream>
using namespace std;

int main()
{
	int n;
	int num;
	int min = 1000000;
	int max = -1000000;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num > max) max = num;
		if (num < min) min = num;
	}

	cout << min << " " << max << endl;

	return 0;
}