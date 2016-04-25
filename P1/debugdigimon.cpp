/*
 * Create a number by entering single digits similar to a calculator.
 * If numbers other than 0 thru 9 are entered they should be ignored.
 * At the end, display the number of digits and the final number.
 */

#include<iostream>
using namespace std;

int main()
{
    // give instructions
    cout << "This program creates a number one digit at a time." << endl;
    cout << "Signal the end of the number with a negative value." << endl << endl;
    
    int number;
    number = 0;
    
    // begin reading digits until negative entered
    int count = 0;
    int digit;
    while (true) 
    {
        cout << "Enter a number: ";
        cin >> digit;
        
        // check to see if we are done
        if (digit < 0) 
            break;
        
        // add to our number
        if (digit >= 0 && digit <= 9)
            number = number*10 + digit;
    }
    int pelotas = number;
    while (true)
    {        
        if (pelotas <= 0)
            break;
        pelotas /= 10;
        // count digits
        count++;
    }
        
    
    // final report
    cout << endl << "You entered a " << count << " digit number: " << number << endl;
}