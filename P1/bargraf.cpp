#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int count, llama[41];
	cout << "Number of values to graph: ";
	cin >> count;
	
	for (int i = 0; i < count; i++)
	{
		cin >> llama[i];
	}
	cout << endl;
	for (int a = 0; a < count; a++)
	{
		cout << setw(2) << llama[a] << " | ";
	
		for (int b = 0; b < llama[a]; b++)
		{
			cout << "#";
		}	
		cout << endl;
	}
}