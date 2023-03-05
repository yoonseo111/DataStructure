// finding the number of the words in the sentence

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int result = 0;
	string word;
	getline(cin, word);

	result = 1;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == ' ') result++;
	}

	if (word[0] == ' ')
		result--;
	if (word[word.length() - 1] == ' ')
		result--;

	cout << result << '\n';
	return 0;
}
