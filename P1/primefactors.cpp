#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Number: ";
	cin >> n;
	cout << endl << "( ";
	
	while (n % 2 == 0)
	{
		cout << 2;
		n /= 2;
		
		if (n != 1)
			cout << " * ";
	}
	
	for (int i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			cout << i;
			if ( n != i)
				cout << " * ";
			n /= i;
		}
	}
	cout << " )";
}