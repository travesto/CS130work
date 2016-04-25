#include <iostream>
using namespace std;

int main()
{
	int count;
	string word;
	char letter, highest;
	
	cout << "Enter a word: ";
	cin >> word;
	
	highest = word[0];
	for (int i = 0; word[i] != 0; i++)
	{
		word[i] = tolower(word[i]);
		if ((char) word[i] > highest)
		{
			highest = word[i];
		}
	}
	highest = tolower(highest);
	cout << (char) highest << " is the highest letter in " << word;
}

