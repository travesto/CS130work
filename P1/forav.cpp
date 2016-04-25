#include <iostream>
using namespace std;

int main()
{
	int n;
	float n2, sum = 0, av;
	cout << "This program averages numbers." ;
	cout << endl << endl << "How many numbers? ";
	cin >> n;
	
	for (int p = 1; p <= n; p++)
	{
		cout << "Number: ";
		cin >> n2;
		sum += n2;
	}
	
	av = sum / n;
	cout << "The average is " << av << "." ;
}