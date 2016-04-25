#include <iostream>
using namespace std;

int howManyCoins(int& amount, int value)
{
	int llama = amount / value;
	amount -= llama * value;
	return llama;  	
}
int main ()
{
	int caaaarl;
	cout << "Enter an amount: ";
	cin >> caaaarl;
	
	cout << endl << howManyCoins(caaaarl, 25) << " quarter(s)";
	cout << endl << howManyCoins(caaaarl, 10) << " dime(s)";
	cout << endl << howManyCoins(caaaarl, 5) << " nickel(s)";
	cout << endl << howManyCoins(caaaarl, 1) << " penny(s)";
}