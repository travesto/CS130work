#include <iostream>
using namespace std;

int main()
{
    string a = "qwerty";
string b = "mnbvcxz";
string answer = "ab";
for (int i = 1; i < 6; i++)
{
    answer[i-1] = a[i];
    a[i] = b[i+1];
    answer += a[i-1];
    cout << answer << endl;
}
}