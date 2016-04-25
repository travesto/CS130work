#include <iostream>
using namespace std;

int main()
{
	string llama1;
	string llama2;
	bool equalIgnoringCase = true;
	int i = 0;
	
	cout << "Enter two strings.";
	cout << endl << "String 1: ";
	cin >> llama1;
	cout << "String 2: ";
	cin >> llama2;
	
	while(llama1[i] != 0 && llama2[i] != 0)
	{
		if (toupper(llama1[i]) != toupper(llama2[i]))
		{
			equalIgnoringCase = false;
				break;
		}
		i++;
	}
	cout << endl << llama1 << " and " << llama2;
	
	if(equalIgnoringCase)
	{
		cout << " are equal.";
	}
	else
	{
		cout << " are not equal.";
	}
	
}