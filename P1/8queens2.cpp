#include <iostream>
using namespace std;

int main ()
{
	int board[8], i;
	cout << "Enter the columns containing queens, in order by row:";
	for (i = 0; i < 8; i++)
	{
		cin >> board[i];
	}
		for (int r = 0; r < 8; r++)
		{
			for (int c = 0; c < 8; c++)
			{
				if (board[c] == r)
				{
					cout << "Q";
				}
				else 
				{
					cout << ".";
				}
			}
		cout << endl;
		}	

}