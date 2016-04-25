#include <iostream>
#include <sstream>
using namespace std;

int countDigits(int N)
{
	int count = 0;
	while ( N !=0 )
	{
		N = N / 10;
		count++;
	}
	return count;
}

int length(string L)
{
	int counts = 0;
	while (L[counts] !=0)
		counts++;
	return counts;
}

string sort(string& R)
{
	for (int j = 0; j < length(R) - 1; j++)
	{
		int lowest = j;
		for (int i = j + 1; i < length(R); i++)
		{
			if (R[lowest] > R[i])
				lowest = i; 
		}
		int temp = R[lowest];
		R[lowest] = R[j];
		R[j] = temp;
	}
	return R;
}

string convert(int M)
{
	string K = "";
	stringstream ss;
	int store = countDigits(M);
	for (int x = 0; x < store; x++)
	{
		ss << (M % 10);
		K += ss.str();
		ss.str(string());
		M = M / 10;
	}
	return K;
}

int isVampire(int V)
{
	int solution = 0;
	string P = convert(V);
	int F = 1;
	int G = 0;
	string T;
	for (int temp = 1; temp < countDigits(V) / 2; temp++)
		F *= 10;
	int end = F * 10;
	for (; F < end; F++)
	{
		if (V % F == 0)
		{
			G = V / F;
			if (F <= G && !(F % 10 == 0 && G % 10 == 0) && countDigits(F) == countDigits(G))
			{
				T = convert(F) + convert(G);
				sort(P);
				sort(T);
				if (P == T)
				{
					solution = F;
					return solution;
					break;
				}
			}
		}
	}
	return solution;
}


int main ()
{
	int Fang;
	cout << "Enter a number: ";
	cin >> Fang;
	cout << endl;
	if (isVampire(Fang) != 0)
	{
		int fang1 = isVampire(Fang);
		int fang2 = Fang / fang1;
		cout << fang1 << " * " << fang2 << endl;
	}
	else
		cout << "No stakes needed" << endl;
}