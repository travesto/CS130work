#include <iostream>
using namespace std;

float convert(float feet, float inches)
{
	//return feet = feet / 12;
	return inches = ((feet * 12) + inches) * 2.54;
	
}
int main()
{
	float a, b;
	cout << "Feet? ";
	cin >> a;
	cout << "Inches? ";
	cin >> b;
	//b = b + (a * 12);
	cout << "The length is " << convert(a,b) << " cm.";
}