#include <iostream>
using namespace std;

int main ()
{
	int rows, columns;
	cout << "How many rows? ";
	cin >> rows;
	cout << endl;
	
	for (int a = 0; a < rows; a++)
	{
		{
			for ( int i = 0; i <= a; i++)
			cout << "@";
		}
		cout << endl;
	}
}