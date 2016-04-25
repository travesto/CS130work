#include <iostream>
using namespace std;

int Combinations(int n, int k)
{
	if (k == 0 || k == n)
	{
		return 1;
	}
	return Combinations(n-1,k) + Combinations(n-1,k-1);
}
int main()
{
	int a,b;
	cout << "Enter an Integer: ";
	cin >> a;
	cout << "Enter another Integer: ";
	cin >> b;
	cout << "Combinations(" <<a<<","<<b<< ")"<<" = " << Combinations(a,b);
}