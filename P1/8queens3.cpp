#include <iostream>
using namespace std;

int main()
{
	int board[8];
	bool sheep = false;
	cout << "Enter the rows containing queens, in order by column:";
	for (int llama = 0; llama < 8; llama++)
	{
		cin >> board[llama];
	}
	for (int alpaca = 0; alpaca < 8; alpaca++)
	{
		for (int b = 8; b > 0; b--)
		{
			if (board[alpaca] == board[b] && alpaca != b)
			{
				sheep = true;
			}
		}
	}
	cout << endl;
	
	if (sheep)
	{
		cout << "No";
	}
	else 
	{
		cout << "Yes";
	}
}