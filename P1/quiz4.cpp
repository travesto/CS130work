
#include <iostream>
using namespace std;

int main ()
{
	int array[20], query, search;
	
	while (true)
	{
		cout << "Enter number: ";
		cin >> query;
		if (query == 0)
			break;
		bool num = false;
		for (int i = 0; i < query; i++)
		{
			if (query == array[i])
				num = true;			
		}
				
	}
	
	cout << endl << "Look for: ";
	cin >> search;
	cout << endl;
	for (int q = 0; q <= search; q++)
	{
		if (search = array[q])
		{
			cout << search << " appears at index " << array[q] << " in the list.";
		}
		else 
			cout << search << " does not appear in the list.";
	}
}		