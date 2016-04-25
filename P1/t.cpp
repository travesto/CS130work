#include <iostream>
using namespace std;

int main ()
{
	int t = 0.5;
	int g = 2.0;
	
	if (t*g <= g)
		g = g * 6.0;
	else 
		g =  t * g;
	cout << g;
}