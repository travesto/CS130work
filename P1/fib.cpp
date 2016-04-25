#include <iomanip>
#include <iostream>
using namespace std;

int main ()
{
	int n = 0; 
	int j = 0;
	int k = 1; 
	int count = 1;
	cout << "This program lists the Fibonacci sequence." << endl;
	cout << "Highest Fibonacci number to print? ";
	cin >> n;
	
	int sum = 1;
	
	cout << "F( 0) =    0" << endl ;
	
	while(sum <= n)
        {
		cout << "F(" << setw(2) << count << ") =" << setw(5) << sum << endl;
		sum=j+k;
		count++;
		j=k;
		k=sum;

		
	}
}
