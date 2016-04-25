#include <iostream>
#include "p2stack.h"
using namespace std;


bool Opening(char symbol);
bool Closing(char symbol);
bool Equal(char symbol, char openSymbol);

bool Opening(char symbol)
{
  if (symbol == '(' ||  symbol == '[')
    return true;
  else
    return false;
}      

bool Closing(char symbol)
{
  if (symbol == ')' || symbol == ']')
    return true;
  else
    return false;
}      

bool Equal(char symbol, char openSymbol)
{
  return  ((openSymbol == '(' && symbol == ')') || (openSymbol == '[' && symbol == ']'));
}

int main ()
{
    string str;
    int count = 0;
    char a;
    bool wellformed = true;
    Stack<char> S; //initialize staack
    initialize(S);
    
    cout << "Enter expression: ";
    cin >> str;
    while (str[count] && wellformed)
    {
        
        a = str[count];
      
        if (Opening(a))//push opening things 
        {
            push(S,a);
        }
        else if (Closing(a)) //add if for isEmpty and bool flag
        {
            if (isEmpty(S)) //if closing, pop stack and check against input closing thing
            {
                wellformed = false;
            }
            else
            {
                char x = pop(S);
                wellformed = Equal(a,x);              
            }
        }
        else if (isEmpty(S)) //check for input
        {
            wellformed = true;
        }
        count++;
        
    }
    if ((wellformed) && isEmpty(S))
    {
        cout << "Expression " << str << " is well-formed."; 
    }    
    else
    {
        cout << "Expression " << str << " is not well-formed.";
    }
    destroy(S);
    
    
}