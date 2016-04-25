#include <iostream>
using namespace std;

int main ()
{
	//Este es una programa que dice cuantos dias hay en un mes 
	int m, y, n;
	
	cout << "Month: ";
	cin >> m;
	cout << "Year: ";
	cin >> y;
	
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			n = 31;
		else if (m == 4 || m == 6 || m == 9 || m == 11)
			n = 30;
		else if (m == 2)
			{
				n = 28;
				if 	((y%4 == 0 && y%100 != 0) || y%400 == 0 )
				n = 29;
			}
	}	
	cout << endl << m << "/" << y << " has " << n << " days.";
		
}