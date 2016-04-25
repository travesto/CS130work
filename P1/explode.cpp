#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int explode(int number, int array[])
{
    // Write this function to populate array with digits from number
    //  and return the number of digits in array
	int count, a = number;
	for (count = 0; a != 0; count++)
	{
		a /= 10;
	}
	for (int b = (count -1); b >= 0; b--)
	{
		array[b] = number % 10;
		number /= 10;
	}
	return count;
}

int main()
{
	int digits[10];
	int numdigits;
	
	int n;
	cout << "Enter number: ";
	cin >> n;
	
	numdigits = explode(n,digits);
	
	cout << "[" << digits[0];
	for( int i = 1; i < numdigits; i++ )
		cout << "," << digits[i];
	cout << "]" << endl;
}

/*
for(; i <= 100 ; i++ )
    {
        
		cout << "Number: ";
		cin >> numbers[i];
		if (numbers[i] == -1)
			break;
	
	}
	cout << "Numbers entered in reverse: ";
	for(int c = (i-1); c >= 0; c-- )
    {
		cout << numbers[c] << " ";
    }
*/