#include <iostream>
using namespace std;

int main ()
{
	int numbers[100];
	int i = 0;
	cout << "This program repeats numbers the user enters in reverse. Use -1 to end.\n";
	cout << endl;
	
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
}