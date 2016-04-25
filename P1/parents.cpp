#include <iostream>
using namespace std;

int main()
{
	string parent;
	int childnum;
	string childname;
	
	cout << "This program prints parent-child pairs.\nEnter parents and children below, use 'quit' to stop.\nParent: ";
	for (int a = 0; a < 100; a++)
	{
		cin >> parent[a];
		while (parent != "quit")
		{
			for (int i = 0; i < 100; i++)
			{
				cout << "How many children does " << parent[a] << " have? ";
				cin >> childnum;
				cout << "Children of " << parent[a] << ": ";
				for (int b = 0; b < childnum; b++)
				{
					cin >> childname[a];
				}
				
			}
		}	
	}	
}