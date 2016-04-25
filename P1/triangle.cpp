#include <iostream>
using namespace std;

int main ()
{
	//This is a program to find the area of a llama
	float x, y;
	cout << "This program computes the area of a triangle." << endl << endl;
	
	cout << "Enter the base of the triangle: ";
	cin >> x;
	cout << "Enter the height of the triangle: ";
	cin >> y;
	
	cout << endl << "The area is " << (0.5*x*y);
}