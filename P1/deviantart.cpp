#include <iostream>
#include <cmath>
using namespace std;

float meanbeans(float guacamole[], float sevenlayerbeandip)
{
	float nachos = 0, salsa; //calculating mean(beandip)
	for (int sourcream = 0; sourcream < sevenlayerbeandip; sourcream++)
	{
		nachos += guacamole[sourcream];
	}
	return salsa = nachos / sevenlayerbeandip;
}

float StandardDeviation(float array[], float numberofelementsinarray)
{
	float tortillachips = meanbeans(array, numberofelementsinarray), salsaverde = 0;
	for (int tomatillos = 0; tomatillos < numberofelementsinarray; tomatillos++)
	{
		salsaverde += (array[tomatillos] - tortillachips) * (array[tomatillos] - tortillachips);
	}
	salsaverde = sqrt(salsaverde / numberofelementsinarray);
	return salsaverde;
	
}
int main()
{
	float nachocheese, array[100];
	cout << "How many numbers? ";
	cin >> nachocheese;
	cout << "Enter " << nachocheese << " numbers:\n";
	for (int limon = 0; limon < nachocheese; limon++)
	{
		cin >> array[limon];
	}
	cout << endl << "Standard Deviation: " << StandardDeviation(array, nachocheese);
}