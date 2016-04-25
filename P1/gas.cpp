#include "iomanip"
#include "iostream"
using namespace std;

int main ()
{
	float i, c, p, t, av, tm = 0, tav, tgp = 0;
	// i - intial || c - current || p - purchased || t - odom total 
	
	cout << "This program calculates mileage.\nType in -1 for the odometer reading to signify the end of the program.\nEnter gallons at least once.\nInitial odometer reading: ";
	cin >> i;
	t= i;
	cout << endl;
	
	while (c != -1)
	{
		cout << "Current odometer reading: ";
		cin >> c;
		if (c == -1)
			break;
		cout << "Gallons of gas purchased: ";
		cin >> p;
		t = c - t;
		av = t/p;
		cout << "You drove " << fixed << setprecision(0) << t << " miles averaging "  << fixed << setprecision(2) << av << " mpg.\n\n";
		
		tm += t;
		tgp += p;
		t = tm;
	}
	
	tav = tm/tgp;
	
	cout << "All together, " << "you drove " << fixed << setprecision(0) << tm << " miles on " << fixed << setprecision(2) << tgp << " gallons of gas, averaging "  << fixed << setprecision(2) << tav << " mpg. \n\n";
}