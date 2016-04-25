#include <iostream>
using namespace std;

int main ()
{
	cout << "This program identifies the largest of three numbers." << endl;
	
	int x1,x2,x3;
	cout << endl << "Enter integer: ";
	cin >> x1;
	cout << "Enter integer: ";
	cin >> x2;
	cout << "Enter integer: ";
	cin >> x3;
	
	cout << endl;
	
	if (x1 == x2 && x1 < x3)
		cout << "The largest number is " << x3 << "." ;
	if (x1 == x2 && x1 > x3)
		cout << "The largest number is " << x1 << "." ;
	if (x1 == x3 && x1 < x2)
		cout << "The largest number is " << x2 << "." ;
	if (x1 == x3 && x1 > x2)
		cout << "The largest number is " << x1 << "." ;
	if (x2 == x3 && x1 < x2)
		cout << "The largest number is " << x2 << "." ;
	if (x2 == x3 && x1 > x2)
		cout << "The largest number is " << x1 << "." ;
	if (x1 == x2 && x1 == x3)
		cout << "The largest number is " << x1 << "." ;
	
	else if (x1 != x2 && x1 != x3)
			{
				if (x1 > x2 && x1 > x3)
					cout << "The largest number is " << x1 << "." ;
			}
		if (x2 != x1 && x1 != x3)
			{
				if (x2 > x1 && x2 > x3)
					cout << "The largest number is " << x2 << "." ;
			}
		if (x3 != x1 && x3 != x2)
			{
				if (x3 > x1 && x3 > x2)
					cout << "The largest number is " << x3 << "." ;
			}
	/* if (y1 != y2)
		{
			if (y1 < y2)
				cout << m1 << "/" << d1 << "/" << y1 << " is earlier." << endl;
			else cout << m2 << "/" << d2 << "/" << y2 << " is earlier." << endl;
		}
	else if (y1 == y2 && m1 != m2)
		{
			if (m1 < m2)
				cout << m1 << "/" << d1 << "/" << y1 << " is earlier." << endl;
			else cout << m2 << "/" << d2 << "/" << y2 << " is earlier." << endl;
		}
	else if (y1 == y2 && m1 == m2)
		{
			if (d1 < d2)
				cout << m1 << "/" << d1 << "/" << y1 << " is earlier." << endl;
			else cout << m2 << "/" << d2 << "/" << y2 << " is earlier." << endl;
	*/
	//cout << "The largest number is " << b << "." ;
	
}