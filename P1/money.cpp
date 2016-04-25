#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	//A program for adding coins
	int q, d, n, p;
	
	cout << "Quarters: ";
	cin >> q;
	cout << "Dimes: ";
	cin >> d;
	cout << "Nickels: ";
	cin >> n;
	cout << "Pennies: ";
	cin >> p;
	
	q = q * 25;
	d = d * 10;
	n = n * 5;
	p = p;
	
	float t = (q + d + n + p) / 100.00;
	
	cout  << fixed; 
	cout  << endl << "The total is $" << setprecision(2) << t;
}