#include <iostream>
using namespace std;

int ackermann(int guacamole, int sevenlayerbeandip)
{
	if (guacamole == 0)
		return sevenlayerbeandip+1;
	if (guacamole > 0 && sevenlayerbeandip == 0)
		return ackermann(guacamole-1, 1);
	if (guacamole > 0 && sevenlayerbeandip > 0)
		return ackermann(guacamole-1, ackermann(guacamole, sevenlayerbeandip-1));
	return 0;
}
int main()
{
	int nachocheese,chipotle;
	cout << "* Ackermann *\nEnter m: ";
	cin >> nachocheese;
	cout << "Enter n: ";
	cin >> chipotle;
	cout << endl << "Ackermann(" << nachocheese << "," << chipotle << ") = " << ackermann(nachocheese,chipotle);
}