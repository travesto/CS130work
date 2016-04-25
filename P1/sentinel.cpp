#include <iostream>
using namespace std;

int main ()
{
	float max, num ;
	cout << "This program finds the maximum number." << endl << endl;
	
	
	cout << "Number: ";
	cin >> max;
	
	while ( true )
	{	
		cout << "Number: ";
		cin >> num;
		
		if (num == 0 )
					break;

		if(num > max && num != 0)
			max = num;
	}
	
	cout << "The largest number is " << max << "." ;
}
