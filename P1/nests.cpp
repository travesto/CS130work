#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    for( int r = 0; r < rows; r++ ) // each iteration prints one row
    {
        for( int c = 0; c < columns; c++ ) // each iteration prints one symbol (a column in that row)
            cout << "@";
        cout << endl; // add linebreak at end of each row
    }	
}