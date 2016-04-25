/*
 * This determines types of triangles
 */

#include <iostream>
using namespace std;

int main()
{
    // Give instructions
    cout << "This program determines types of triangles." << endl
         << "Enter the lengths of each side of the triangle" << endl
         << "and the program will determine what type of triangle it is." << endl << endl;
        
    // Declare our variables
    double a;
    double b;
    double c;
    
    // Prompt for the lengths of the three legs of the triangle
    cout << "Length of side a: ";
    cin >> a;
    cout << "Length of side b: ";
    cin >> b;
    cout << "Length of side c: ";
    cin >> c;

    // Test if the three legs actually make a triangle
    // For a triangle to be formed by three lengths, the sum of any two
    // legs must be greater than the length of the remaining leg
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "Those lengths do not form a triangle." << endl;
	
	// Test for right triangle
	else if ((a*a + b*b == c*c) || (c*c + a*a == b*b) || (c*c + b*b == a*a))
		cout << "This is a right triangle." << endl;
	
	// equilateral
	else if (a == b && b == c)
		cout << "This is an equilateral triangle." << endl;
		
	// Test for isosceles triangle (two sides are equal)
	else if (a == b || b == c || a == c)
		cout << "This is an isosceles triangle." << endl;
						
	// A scalene triangle has three different length sides.
	// It could be an obtuse or acute scalene triangle.
	// A triangle is obtuse if any of the following conditions are true
	else if ((a*a + b*b <= c*c) || (b*b + c*c <= a*a) || (a*a + c*c <= b*b))
				cout << "This is an obtuse scalene triangle." << endl;
				else 
					cout << "This is an acute scalene triangle." << endl;
			
			

}
//if ((a != b && a != c && b != c) && ((a*a + b*b >= c*c) || (b*b + c*c >= a*a) || (a*a + c*c >= b*b)))
//((a != b && a != c && b != c) &&