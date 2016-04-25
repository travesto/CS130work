#include <iostream>
using namespace std;

int isPalindrome(string llama)
{
	int a = 0, b = 0;
	while (llama[a] != 0)
	{
		a++;
	}
	for(int c = (a-1); c >= 0; c-- )
	{
		if (toupper(llama[b]) == toupper(llama[c]))
		{
			b++;
		}
		else return false;
	}
	return true;	
}

int main()
{
	string alpaca;
	cout << "Enter a string: ";
	cin >> alpaca;
	cout << endl << alpaca;
	if (isPalindrome(alpaca))
	{
		cout << " is a palindrome.";
	}
	else
	{
		cout << " is not a palindrome.";
	}
}

	