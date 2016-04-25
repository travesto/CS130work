#include <iostream>
using namespace std;

int pow(int base, int power)
{
	if (power == 1)
		return base;
	if (power == 0)
		return base = 1;
	else 
		return base * pow(base, (power - 1));
}
int main ()
{
	int a,b;
	cout << "This program calculates exponenetial values.\nEnter the base: ";
	cin >> a;
	cout << "Enter the power: ";
	cin >> b;
	cout << endl;
	cout << a <<"^"<< b << " = " << pow(a,b);
}