#include <iostream>
using namespace std;

void main() {
	int i = 10;
	int* p;
	p = &i;
	*p = 8;

	cout << "p: " << p << endl;
	cout << "i: " << i << endl;
}