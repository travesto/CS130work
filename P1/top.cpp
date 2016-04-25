#include <iostream>
using namespace std;

int main ()
{
	int rows;
	cout << "How many rows? ";
	cin >> rows;
	cout << endl;
	
	for (int a = rows; a > 0; a--)
	{
		for ( int i = 0; i < rows - a; i++)
		{
			cout << " ";
		}
		for (int b = 1; b <= a; b++)
		{
			cout << "@";
		}
		
		cout << endl;
	}
}