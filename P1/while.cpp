#include <iostream>
using namespace std;

int main ()
{
	float n, sum, av;
	int cuantos;
	cout << "This program averages numbers." << endl << endl;
	
	sum = 0;
	cuantos = 0;
	n = 0;
	while( n >= 0 )
	{
		cout << "Number: ";
		cin >> n;
		if ( n != -1)
		{
			sum += n;
		}
		cuantos++;
	}
	/*
	cout << n << endl;
	cout << sum << endl;
	cout << cuantos << endl;
	*/
	
	av = (sum / (cuantos - 1));
	cout << "The average is " << av << ".";

}
