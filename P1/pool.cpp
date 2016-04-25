#include <iostream>
using namespace std;

int main ()
{
	//This is a program to find the time and volume to fill a container.
	int l, w, d, r;
	cout << "Enter pool dimensions" << endl;
	cout << "Length: ";
	cin >> l;
	cout << "Width: ";
	cin >> w;
	cout << "Depth: ";
	cin >> d;
	int v = (l*w*d);
	
	cout << endl << "Water entry rate: ";
	cin >> r;
	
	cout << endl << "The pool will fill completely in " << ((v*7.48)/r) << " minutes";
}