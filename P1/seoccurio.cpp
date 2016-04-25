#include <iostream>
using namespace std;

int main ()
{
	string palabra;
	char letra;
	int cuanto = 0;
	
	cout << "Enter a string: ";
	cin >> palabra;
	cout << "Enter a character: ";
	cin >> letra;
	letra = toupper(letra);
	for (int i = 0; palabra[i] != 0; i++)
	{
		if (palabra[i] == letra || palabra[i] == tolower(letra))
		{
			cuanto++;
		}
	}
	cout << endl << "\"" << letra << "\" appears " << cuanto << " time(s)";
}