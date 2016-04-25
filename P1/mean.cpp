#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	float llama[100];
	float mean, count, total = 0;
	cout << "How many values are in the list? ";
	cin >> count;
	for (int a = 0; a < count; a++ )
	{
		cin >> llama[a];
		total = total + llama[a];
		
	}
	mean = total / count;
	float b = 0;
	for (int c = 0; c < count; c++)
	{
		if (llama[c] > mean)
			b++;
	}

	cout << b << " values from the list are above the mean of " << fixed << setprecision(2) <<mean;
}