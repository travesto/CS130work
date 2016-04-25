#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int length(string s)
{
    int i = 0;
    while (s[i] != 0)
    {
        i++;
    }
    return i;
}
string sort(string s) // this probably doesnt work
{
    int high, low, x; 
    for (int i = 0; i < length(s) - 1; i++)
    {
        low = i;
        for (int a = i + 1; a < length(s); a++)
        {
            if (s[low] > s[a])
			{
				low = a;
			}
        }
        x = s[low];
        s[low] = s[i];
        s[i] = x;
    }
    return s;
}
string convert(int n) //use exploding number
{
    /*
	s += (char)(n%10+0) //makes character 5
    n /= 10
    concatenate..pulls one digits   
    */
    string s = "";
    stringstream sa;
    int a = countDigits(n);
    for (int b = 0; b < a; b++)
    {
        sa << (n % 10);
        s += sa.str();
        sa.str(string());
        n /= 10;
    }
	return s;

}

int isVampire(int n)
{
    string s, t;
    s = convert(n);
    for (int i = 2; i <= n; i++ )
    {
        if ( n % i == 0)
        {
          
            if ((countDigits(n) - (2 * countDigits(i)) == 0) && (countDigits(n) - (2 * countDigits(n/i)) == 0))
            {
                
                if ((i % 10 != 0) || ((n/i) % 10 != 0))
                {
                    //cout << "IS IT WORKING, YET?\n";
                    t = (convert(i) + convert(n/i));
                    //cout << t << endl;
                    t = sort(t);
                    s = sort(s);
                    //cout << s << endl << t;
                    if (s == t)
                    {
                        return i;
                    }
                }  
            }
            
            
        }
       
            
        
    }
    return 0;    
    
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
    int fang = isVampire(n);
    if (fang != 0)
    {
        cout << fang << " * " << (n/fang);
                
    }
    else 
        cout << "No stakes needed";
       
}