#include <iostream>
using namespace std;

int main()
{
	int numEmployee;
	string name[100];
	int num[100];
	string search;
	cout << "How many employees? ";
	cin >> numEmployee;
	cout << endl << "Enter employee names and numbers:\n";
	for (int i = 0; i < numEmployee; i++)
	{
		cin >> name[i];
		cin >> num[i];
	}

	cout << endl << "Enter a name, or Quit to stop the program.\nName? ";
	cin >> search;
	while (search != "Quit")	
	{
		for (int a = 0; a < numEmployee; a++)
		{
			if (search == name[a])
				cout << name[a] << " is employee number " << num[a] << endl;
		}
		
		cout << endl << "Name? ";
		cin >> search;
	}	
}