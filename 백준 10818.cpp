// finding min, max

#include <iostream>
using namespace std;

int main()
{
	int n;
	int min = 1000000;
	int max = -1000000;

	cin >> n;

	int* num = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (num[i] > max) max = num[i];
		if (num[i] < min) min = num[i];
	}

	cout << min << " " << max << endl;

	return 0;
}
