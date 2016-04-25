#include <iostream>
using namespace std;

int fib(int n)
{
	
	if (n == 1)
	{
		return 1;
	}
	if (n == 0)
		return 0;
	if (n > 0)
	{
		return fib(n-1) + fib(n-2);
	}
	return n;
}

int main ()
{
	int place;
	cout << "This program calculates numbers in the Fibonacci sequence.\nWhich place in the sequence do you want to calculate? ";
	cin >> place;
	cout << endl <<  "Fibonacci(" << place << ") is " << fib(place);
}
