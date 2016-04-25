// Include iostream to get access to istream, ostream
#include <iostream>
using namespace std;

struct Fraction {
   int num;
   int den;
};

// A function to calculate the greatest common divisor will be useful
int gcd(int a, int b)
{
	if( b == 0 )
		return a;
	return gcd(b,a%b);
}

// All fraction values are reduced
// For example, we have 3/4 and never 9/12
// It would be good to create a function to do that
void reduce(Fraction &f)
{
	//if denom is neg make num neg
    int a = gcd(f.num,f.den);
    f.num /= a;
    f.den /= a;
    if (f.den < 0)
    {
        f.den = 0 - f.den;
        f.num = 0 - f.num;
    }
    
}

istream& operator>>(istream& in, Fraction &f)
{
    // Implement fraction input here
    char slash;
    in >> f.num >> slash >> f.den;
    return in;
}

ostream& operator<<(ostream& out, Fraction f)
{
    // Implement fraction output here
    out << f.num << "/" << f.den;
    return out;
}

Fraction operator+(Fraction a, Fraction b)
{
    // Implement fraction addition here
    Fraction i;
    i.num = (a.num*b.den) + (b.num*a.den);
    i.den = (a.den*b.den); 
    reduce(i);
    return i;
}

Fraction operator-(Fraction a, Fraction b)
{
    // Implement fraction subtraction (a-b) here
    Fraction i;
    i.num = (a.num*b.den) - (b.num*a.den);
    i.den = (a.den*b.den);
    reduce(i);
    return i;
}

Fraction operator*(Fraction a, Fraction b)
{
    // Implement fraction multiplication here
    Fraction i;
    i.num = (a.num*b.num);
    i.den = (a.den*b.den);
    reduce(i);
    return i;
}

Fraction operator/(Fraction a, Fraction b)
{
    // Implement fraction division (a/b) here
    Fraction i;
    i.num = (a.num*b.den);
    i.den = (a.den*b.num);
    reduce(i);
    return i;
}