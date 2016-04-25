#include <iostream>
#include <iomanip>
using namespace std;


void PrintArray(int a[], int size)
{
	for( int i = 0; i < size-1; i++ )
		cout << setw(2) << a[i] << ",";
	cout << setw(2) << a[size-1] << endl;
}

int main()
{
	int x[100], values, llama, low, a;
	cout << "This program sorts a set of numbers.\n\n" << "How many values? ";
	cin >> values;
	for (int b = 0 ; b < values; b++)
	{
		cin >> x[b];
	}
	cout << endl;
	for (int g = 0; g < (values - 1); g++ )
	{
		low = x[g];
		
		for (int b = g; b < values; b++)
		{
			if (low > x[b])
			{
				low = x[b];
				a = b;
			}
		}
		if (low != x[g])
		{
			llama = x[g];
			x[g] = low;
			x[a] = llama;
		}
		
		PrintArray(x,values);
	}

}

