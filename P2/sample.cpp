#include <iostream>
#include <sstream>
using namespace std;

char Demorse(string word)
{
   string alpha[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                     "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
                     "..-","...-",".--","-..-", "-.--", "--.."};
   int i=0;
   while(true)
   {
      if (alpha[i] == word)
         return (char)(i+65);
      i++;
   }
}

int main()
{
   cout << "Enter Morse words, one per line, then Quit.\n";
   string morsedsentence;
   string line;
   getline(cin, line);
   while (line != "Quit")
   {
      stringstream ss(line);
      string word;
      while(ss >> word)
      {
         morsedsentence += Demorse(word);
      }
      morsedsentence += " ";
      getline(cin, line);
   }
   cout << morsedsentence;
}