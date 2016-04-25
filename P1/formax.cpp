#include <iostream>
using namespace std;

int main ()
{
	int q;
      float n, m;
	m = -10000; //I tried setting max to the initial value (n), but it was doing weird math...
	cout << "This program finds the maximum number." << endl;
	cout << endl << "How many numbers? ";
	cin >> q;
	
	for (int p = 1; p <= q; p++)
	{	cout << "Number: ";
		cin >> n;
            if (n > m)
                  m = n;
      } 
	cout << "The largest number is " << m ;
}
/* 
   float number,largest;
   
   cout << "Number: ";
   cin >> number;

   // Only value so far, so must be the largest
   largest = number;

   while( number != 0 )
   {
      if( number > largest )
         largest = number;

      cout << "Number: ";
      cin >> number;
   }

   cout << "The largest number is " << largest << "." << endl;
*/
