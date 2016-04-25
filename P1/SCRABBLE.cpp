#include <iostream>
using namespace std;

int main ()
{
	cout << "This program calculates the Scrabble score for a word. \n";
	string waod;
	int score = 0;
	cout << endl << "Word: ";
	cin >> waod;
	string temp;
	
	for (int i = 0; waod[i] != 0; i++ )
	{
		temp[i] = toupper(waod[i]);
		if (temp[i] == 'Q' || temp[i] == 'Z')
		{
			score += 10;
		}
		else if (temp[i] == 'J' || temp[i] == 'X')
		{
			score += 8;
		}
		else if (temp[i] == 'K')
		{
			score += 5;
		}
		else if (temp[i] == 'F' || temp[i] == 'H' || temp[i] == 'V' || temp[i] == 'W' || temp[i] == 'Y')
		{
			score += 4;
		}
		else if (temp[i] == 'B' || temp[i] == 'C' || temp[i] == 'M' || temp[i] == 'P')
		{
			score += 3;
		}
		else if (temp[i] == 'D' || temp[i] == 'G')
		{
			score += 2;
		}
		else
		{
			score += 1;
		}	
	}
	cout << "The basic score for '" << waod << "' is " << score;
}