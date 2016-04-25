#include <iostream>
using namespace std;

int round(int number, int unit)
{
	number /= unit;
	return number *= unit;
}
int main()
{
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	cout << endl << "Round to ten: " << round(num, 10);
	cout << endl << "Round to hundred: " << round(num, 100);
	cout << endl << "Round to thousand: " << round(num, 1000);
}