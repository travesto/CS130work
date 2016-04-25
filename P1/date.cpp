#include <iostream>
using namespace std;

int main ()
{
	int m1, m2, d1, d2, y1, y2;
	cout << "Enter date #1 (month day year): ";
	cin >> m1;
	cin >> d1;
	cin >> y1;
	cout << "Enter date #2 (month day year): ";
	cin >> m2;
	cin >> d2;
	cin >> y2;
	
	cout << endl;
	
	if (y1 != y2)
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
		}
}