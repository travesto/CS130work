//321,
#include <iostream>
using namespace std;

int main ()
{
	int x = 2, y = 3;
	for (int i = 2; i <= y * 2; i++)
    {
		x += i;
		cout << x <<"\n";
	}
	cout << endl << x;
}
	/*
	int i=3;
while ( i > 0 ) {
    cout << i;
    int j = i;
    while ( j > 0 ) {
        j--;
        cout << j;
    }
    i--;
    cout << ",";
	*/

	/*
	int j = 1;
	for (int i=0; i<10; i+=j) 
	{
    	cout << j;
    	j = i+1;
	}
	*/

/*
{
	int n = 0;
	for (int i=16; i%2==0; i/=2) 
	{
   		n++;
    	cout << i;
	}
	cout << n;

}
*/