#include <iostream>
//#include <iomanip>
using namespace std;

int main ()
{
	int n, m = 0;
	cout << "How many rows? ";
	cin >> n;
	cout << endl;
	
	for (int i = 1; i <= n; i++)
	{
		for (int q = 1; q <= n - i; q++)
		{
			cout << " ";
		}
		while (m != 2 * i - 1)
		{
			cout << "@";
			m++;
		}
		m = 0;
		cout << endl;
	}
}