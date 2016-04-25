#include <iostream>
using namespace std;

int main()
{
	char hex1, hex2;
	int sum;
	cout << "Add two hexadecimal digits and then show the result as a decimal value.\n";
	cout << "Hexadecimal: ";
	cin >> hex1;
	cout << "Hexadecimal: ";
	cin >> hex2;
	
	if (isdigit(hex1) && isdigit(hex2))
	{
		sum = (hex1-48) + (hex2-48);
	}
	else if (isalpha(hex1) && isalpha(hex2))
	{
		sum = (hex1-87) + (hex2-87);
	}	
	else 
	{
		sum = (hex1 + hex2) - 135;
	}
	
	cout << endl << hex1 << " + " << hex2 << " = " <<  sum;
	
	
	
}