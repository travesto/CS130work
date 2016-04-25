#include <iostream>
using namespace std;

int f(int n)
{
    n = n+1;
    return n;
}

int g(int n,int m)
{
    int t = n;
    m = n;
    n = t;
    n += m;
    return m;
}

int h(int n)
{
    int m = 2*n;
    n = m - n;
    return n;
}

int main() 
{
    int n = 3;
    int m = 5;
    int t = 7;

    cout << f(n) << " " << g(m,t) << endl;
    cout << h(n) << " " << g(t,m) << endl;
    cout << g(f(m),h(t)) << endl;
    cout << f(g(h(n),1)) << endl;
    cout << h(g(m,f(n))) << endl;
    cout << f(f(m)) << endl;
}