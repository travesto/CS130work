

#include<iostream>
 
using namespace std;
 
int main()
{
   int n, c, first = 0, second = 1, next, count = 1;
 
   cout << "This program lists the Fibonacci sequence." << endl;
   cout << "How many terms? ";
   cin >> n;
 
   cout << "F(0) = 0" << endl ;
 
   for ( c = 1 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
         count++;
      }
      cout << "F(" << count << ") = " << next << endl;
   }
 

}