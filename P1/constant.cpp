#include <iostream>
using namespace std;

int main()
{
	char mrcrabs;
	
	cout << "Enter constant: ";
	cin >> mrcrabs;
	cout << endl;
	
	if (isdigit(mrcrabs) || isspace(mrcrabs) || ispunct(mrcrabs) )
	{
		cout << mrcrabs << " is not a letter.";
	}
	
	if (isalpha(mrcrabs) )
	{
		if (mrcrabs == 'a' || mrcrabs == 'e' || mrcrabs == 'i' || mrcrabs == 'o' || mrcrabs == 'u' || mrcrabs == 'A' || mrcrabs == 'E' || mrcrabs == 'I' || mrcrabs == 'O' || mrcrabs == 'U')
		{
			cout << mrcrabs << " is a vowel.";
		}
		else
			cout << mrcrabs << " is a consonant.";
	}
	
}