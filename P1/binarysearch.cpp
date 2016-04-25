
#include <iostream>
using namespace std;

int binarySearch(int A[], int size, int value)
{
	int a = -1, lo = 0;
	int hi = size - 1;
	int middle;
	bool val = false;

	while(!val && lo <= hi)
	{
		middle = (hi + lo) / 2;
		
		if(A[middle] == value)
		{
			val = true;
			a = middle;
		}
		
		else if(A[middle] > value)
			hi = middle - 1;
		
		else
			lo = middle + 1;
	}
	
	return a;

}

int main()
{
	int num, key, array[500];
	cout << "How many values? ";
	cin >> num;
	for (int a = 0; a < num; a++)
	{
		cin >> array[a];
	}
	cout << "Search for: ";
	cin >> key;
	if (binarySearch(array, num, key) == -1)
	{
		cout << key << " does not appear in the list";
	}	
	else 
	{
		cout << key << " appears at index " << binarySearch(array, num, key);
	}
}