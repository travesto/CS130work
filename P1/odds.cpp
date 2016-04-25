#include <iostream>
using namespace std;

int main ()
{
	//This makes the sum of odds
	float n, s;
	s = 0;
	
	//cout << "Enter a number: " ;
	//cin >> n;
	
	while (true)
	{	
		cout << "Enter a number: ";
		cin >> n;
		
		if (n == -1 )
					break;
				
		if ((int)n % 2 != 0)
			s = (s + n);
	}
	
	cout << endl << "The sum of the odd numbers is " << s << "." ;
}
