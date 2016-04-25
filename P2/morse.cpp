#include <iostream>
#include <sstream>
using namespace std;

char translate(string x)
{
    string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-", "-.--", "--.."};
    //string alpha[] = {"A","B","C","D","E","F","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    
    //for (int i = 0; i < 26; i++)
    int i = 0;
    while (true)
    {
        if ( morse[i] == x)
        {
            return (char)(i+65);
        }
        i++; 
    }
    
    
}
int main()
{
    string morse, sentence, combined;
    cout << "Enter Morse words, one per line: \n";
    getline(cin, morse); //Read morse input
    while (morse != "Quit")
    {
        stringstream stream(morse); //Make into stringstream
        while (stream >> sentence)
        {
            combined += translate(sentence);    
        }
        combined += " ";
        getline(cin, morse); //Read morse input
        
    }
    cout << combined;     
}