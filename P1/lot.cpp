#include <iostream>
using namespace std;

int main ()
{
	int cost = 0;
	int t;
	
	cout << "Enter parking duration (in minutes): ";
	cin >> t;
	
	if (t <= 30)
		cost = 0;
	//else if (t == 60)
	//	cost = 2;
	else if (t <= 420)
		{	cost = ((t/30)); //(2*(t-30)/30);
			if (t % 30 != 0)
				cost = cost + 1;
		}
			//else
	else if (t > 420)
		{	cost = (14 + ((t - 420)/60));
			if (t % 60 != 0)
				cost = cost + 1;
			if (cost > 21)
				cost = 21;
		}
	cout << endl << "Parking cost = $" << cost ;
}
