#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int r, p, a;
	cout << "The program prints a table of exponential powers.\nEnter the number of rows to print: ";
	cin >> r;
	cout << "Enter the number of powers to print: " ;
	cin >> p;
	cout << endl;
	
	for (int i = 1 ; i <= r; i++)
	{
		cout << setw(2) << i;	
		int d = i;	
		for (int q = 1; q < p; q++)
		{
			d *= i;
			//a = (q * q);
			cout << setw(8) << d;
		}
		cout << endl;
	}
}
/*
for (int a = 0; a < rows; a++)
	{
		{
			for ( int i = 0; i <= a; i++)
			cout << "@";
		}
		cout << endl;
*/
//cmath ---> pow(q,p)