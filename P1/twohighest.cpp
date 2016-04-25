#include <iostream>
using namespace std;

int main()
{
	float hi, pen, num, a[1000], amount;
	cout << "How many numbers? ";
	cin >> amount;
	for (int c = 0; c < amount; c++)
	{
		cin >> a[c];
	}
	hi = a[0];
	pen = a[1];
	
	if (pen > hi)
	{
		num = hi;
		hi = pen;
		pen = num;
	}
	for (int b = 2; b < amount; b++)
	{
		if (a[b] > hi)
		{
			pen = hi;
			hi = a[b];
		}
		else if (a[b] > pen)
		{
			pen = a[b];
		
		}
	}
	cout << endl << "Highest: " << hi;
	cout << endl << "Second: " << pen;
}