// finding the mean of the numbers

#include <iostream>
using namespace std;

int main()
{
	int n;
	int max=0;
	cin >> n;

	double* num = new double[n];
	double total = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (num[i] > max) max = num[i];
		total = total + num[i];
	}


	double mean = (total/max*100) / n;

	cout << mean << endl;

	return 0;
}