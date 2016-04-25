#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int num;
	cout << "Enter integer: ";
	cin >> num;
	
	cout << endl << "|" << num << "|" << " = " << std::abs (num);
}