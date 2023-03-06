// OX Quiz

#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	string answer;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> answer;
		int sum = 0;
		int count = 0;
		for (int j = 0; j < answer.length(); j++)
		{
			if (answer[j] == 'O') count++;
			else count = 0;
			sum = sum + count;
		}

		cout << sum << "\n";
	}

	return 0;
}