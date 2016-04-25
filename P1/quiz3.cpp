#include <iostream>
using namespace std;

int main ()
{
	int r, c, s;
	
	cout << "How many? ";
	cin >> r;
	
	while (r > 0)
	{	
		for (s = 1; s <= r; s++)
		{
		
			cout << "#";
		
		}
		cout << endl << "How many? ";
		cin >> r;
	}
	
	
	
	
}