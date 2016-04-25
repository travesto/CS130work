#include <iostream>
using namespace std;

int main()
{
	string llama;
	int count = 0, max = 1;
	char most;
	
	cout << "Enter a string: ";
	cin >> llama;
	
	most = toupper(llama[0]);
	
	for (int i = 0; llama[i] != 0; i++)
	{
		count = 0;
		for (int c = 0; llama[c] != 0; c++)
		{
			if (toupper(llama[c]) == toupper(llama[i]))
			{
				count++;
			}
		}
		if (count > max)
		{
			max = count;
			most = llama[i];
		}	
	}
	most = toupper(most);
	cout << "The most frequent character in " << llama << " is " << most << ".";
}

