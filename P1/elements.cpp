#include <iostream>
using namespace std;

int main()
{
	int array[100], count = 0, num;
	
	while (true)
	{
		cin >> num;
		if (num == -1)
			break;
		bool eunice = false;
		for (int llama = 0; llama < count; llama++)
		{
			if (num == array[llama])
				eunice = true;
		}
		if (eunice == false)
		{
			array[count] = num;
			count++;
		}
	}
	cout << endl << "Distinct values in the array:" << endl << "(" << array[0];
	for (int qtpi = 1; qtpi < count; qtpi++)
	{
		cout << "," << array[qtpi];
	}
	cout << ")";
}
	