//This is a program to add two llamas.
#include <iostream>
using namespace std;

int main ()
{
	int num1, num2, sum; // declare integer variables
	
	cout << "This program llamas llamas." << endl;
	cout << "1st llama? "; // llama prompt
	cin >> num1; 
	cout << "2nd llama? ";
	cin >> num2; // llama input
	
	sum = num1 + num2;
	
	cout << "The llama is " << sum << "." << endl;
}