#include <iostream>
using namespace std;

int sum3s(int num)
{
	int temp = num / 3;
	if(num<=2)
		return 0;
	return (3 * temp + sum3s(3 * (temp-1)));
}
int main()
{
	int z;
	cout << "Enter number: ";
	cin >> z;
	cout << endl << "The sum is " << sum3s(z) << ".";
}