#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   float pounds = 0;
   float kilograms = 0;
   float ounces = 0;
      
   cout << "This program converts kilograms to pounds and ounces." <<endl << "Kilograms: ";
   cin >> kilograms;
   
   // Convert kilograms to pounds
   pounds = kilograms * 2.2;
   
   // Calculate ounces from the decimal part of the total pounds
   ounces = (pounds - (int) pounds) * 16;
   
   cout << endl << kilograms << " kilograms is " << (int) pounds << " pounds and " 
        << fixed << setprecision(1) << ounces << " ounces." << endl;
}