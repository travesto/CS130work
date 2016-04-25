#include <iostream>
using namespace std;

int main()
{
int a[5];
a[0] = 1;
for (int i=1; i<5; i++)
    a[i] = a[i-1]+2;
cout << a[0] << a[1] << a[2] << a[3] << a[4];
}