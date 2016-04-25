#include <iostream>
#include "p2priorityqueue.h"
using namespace std;

void add(int array1[], int array2[], int a, int b, int c)
{
    PriorityQueue<int,int> pq;
    initialize(pq);
    
    for (int space = 0; space < a; space++)
    {
        for (int x = 0; x < b; x++) // sum all digits of array b with a[0]
        {
            push(pq,(array1[space] + array2[x]),(array1[space] + array2[x])); 
        } 
    }
    cout << endl << c << " largest sums" << endl;
    for (int count = 0; count < c; count++)
    {
        cout << pop(pq) << endl;
    }
}
int main()
{
    int k, x = 0, y = 0;
    int uno[100], dos[100];
    
    cout << "Enter 1st list: ";
    cin >> uno[0];
    while (uno[x] != 0) //read int to list 1
    {
        x++;
        cin >> uno[x];
    }
    
    cout << "Enter 2nd list: ";
    cin >> dos[0];
    while (dos[y] != 0) //read ints to list 2
    {
        y++;
        cin >> dos[y];
    }
    cout << "Enter k: ";
    cin >> k;
    add(uno,dos,x,y,k); //get sums
}