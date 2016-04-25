#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int sec = 0;
	int hours = 0;
	int min = 0;
	
	cout << "This program converts seconds into hours, minutes and seconds." << endl;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	
	//Convert sec to min
	hours = sec / 3600;
	sec = sec - (hours * 3600);
	min = sec / 60;
	sec = sec - (min * 60);
	cout << "This corresponds to " << hours << " hours, " << min << " minutes, and " << sec << " seconds.";
}