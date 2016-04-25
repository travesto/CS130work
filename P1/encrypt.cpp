#include <iostream>
using namespace std;

int main()
{
	char letter, resultant;
	int key;
	cout << "This program encrypts a single letter.";
	cout << endl << endl << "Letter: ";
	cin >> letter;
	cout << "Key: ";
	cin >> key;
	
	
	resultant = (char) (toupper(letter) + key);
	//cout << resultant;
	if ((resultant < 'A') )
	{
		resultant += 26;
	}
	else if ((resultant > 'Z') )
	{
		resultant -= 26;
	}
	cout << endl << "Result: " << (char) toupper(resultant);
}