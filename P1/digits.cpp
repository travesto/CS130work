#include <iostream>
using namespace std;

int main ()
{
	int num, digits, sum = 0;
	cout << "This program sums the digits of an integer." << endl;	
	cout << endl << "Enter an integer: " ;
	cin >> num;
	digits = num;
	
	while (digits != 0)
	{
		 
		 sum = sum + digits % 10;
		 digits = digits / 10;
		 
	}
	
	cout << "The sum of the digits in " << num << " is " << sum << ".";
	
}