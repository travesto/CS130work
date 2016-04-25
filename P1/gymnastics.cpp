#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	float score[7];
	float max = 0, min = 11, av, sum = 0;
	
	for (int t = 0; t < 7; t++)
	{
		cin >> score[t];
		if (score[t] > max)
		{
			max = score[t];
		}
		if (score[t] < min)
		{
			min = score[t];
		}
		sum = sum + score[t];
	}
	sum = sum - (max + min);
	av = sum / 5;
	
	cout << "Average score: " << fixed << setprecision(2) << av;
}