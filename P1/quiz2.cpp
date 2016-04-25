#include <iostream>
using namespace std;

int main ()
{
	int n;
	int cn = 0;
	int cp = 0;
	
	cout << "Enter number: ";
	cin >> n;
	
	while (n != 0)
	{
		{
			if (n >= 1)
				cp++;
			
			if (n <= -1)
				cn++;
		}
		cout << "Enter number: ";
		cin >> n;
	}
	
	//cout << cp;
	//cout << endl << cn;
	
	if (cp > cn)
		cout << endl << "Positive";
	if (cp < cn)
		cout << endl << "Negative";
	if (cp == cn) 
		cout << endl << "Equal";
	
}