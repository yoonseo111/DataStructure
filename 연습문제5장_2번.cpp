#include <iostream>
using namespace std;

void sub(int b[]) {
	b[0] = 0;
}

void main()
{
	int a[] = { 1,2,3,4,5,6 };
	sub(a);

	cout << "a[0] = " << a[0] << endl;
}