#include <iostream>
using namespace std;

int addOne(int& x)
{
   x = x + 1;
   return x;
}

int main( )
{
   int a = 7;
   
   cout << "Variable value: " << a << endl;
   cout << "Function result: " << addOne(a) << endl;
}