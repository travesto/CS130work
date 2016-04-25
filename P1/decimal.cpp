#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	float num;
	float dec;
	
	cout << "Enter number: ";
	cin >> num;
	
	dec = num - (int)num;
	
	cout << endl << "After the decimal: " << dec;
	
}