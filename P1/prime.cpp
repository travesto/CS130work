#include <iostream>
using namespace std;

bool isPrime(int n)
{
	bool prime = true;
	
	if (n == 2 || n == 1)
	{
		prime = true;
	}
	
	for ( int c = 2 ; c <= n/2 ; c++ )
	{
		if (n % c == 0)
		{
			prime = false;
			break;
		}
		else 
			prime = true;
	}
	return prime;
}
int main ()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	
	cout << endl;
	
	if (isPrime(n) == true)
		cout << n << " is prime.";
	else 
		cout << n << " is not prime." ;
}