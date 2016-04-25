#include <iostream>
using namespace std;

int main()
{
	int bit[6] = {1,2,3,4,5,6};
	for (int g = 1; g < 6; g++)
	{
		int t = bit[g];
		//cout << "bit[6/g-1] = " << bit[(6/g)-1] << endl;
		bit[g] = bit[(6/g)-1];
		//cout << "bit[g] = " << bit[g] << endl;
		bit[(6/g)-1] = t;
		
	}
	
	cout << bit[0] << endl;
	cout << bit[1] << endl;
	cout << bit[2] << endl;
	cout << bit[3] << endl;
	cout << bit[4] << endl;
	cout << bit[5] << endl;
}
