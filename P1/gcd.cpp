#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
	
}
int main()
{
	int triangleman, marshmallowpeople;
	cout << "This program calculates the greatest common divisor (GCD) for two integers\n\n";
	cout << "Enter a number: ";
	cin >> triangleman;
	cout << "Enter another: ";
	cin >> marshmallowpeople;
	cout << endl;
	cout << "GCD = " << gcd(triangleman, marshmallowpeople);
}