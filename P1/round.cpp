#include <iostream>
using namespace std;

int Round(float num)
{
	return num += .5;	
}

int main()
{
	float gazorpazorfield;
	cout << "Enter a number: ";
	cin >> gazorpazorfield;
	cout << "The rounded number is " << Round(gazorpazorfield);
}