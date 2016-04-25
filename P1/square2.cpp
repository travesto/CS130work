#include <iostream>
using namespace std;

int main ()
{
	int n, s, c;
	
	cout << "The program prints a table of squares.";
	cout << endl << "Enter the number of squares to print: ";
	cin >> n;
	cout << endl;
	
	for ( c = 1 ; c <= n ; c++ )
	{
		s = (c * c);
		cout << c << " squared is " << s << endl;
		
	}
}