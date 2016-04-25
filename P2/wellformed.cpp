#include <iostream>
#include "p2stack.h"
using namespace std;


int main ()
{
    string str;
    int count = 0;
    char a;
    bool wellformed = true, balanced = true;
    Stack<char> S; //initialize staack
    initialize(S);
    
    cout << "Enter expression: ";
    cin >> str;
    while (str[count])
    {
        
        a = str[count];
      
        if ( (a == '(') || (a == '['))//push opening things 
        {
            push(S,a);
        }
        else if (a == ')')//add if for isEmpty and bool flag
        {
            if ( ! isEmpty(S)) //if closing, pop stack and check against input closing thing
            {
                char x = pop(S);
                if (x == '(') //if popped variable is equivalent, bool is true
                {
                    b = true;
                }
                else 
                   b = false;              
              
            }
        }
        else if (a == ']') //repeat for hard brackets 
        {
            if (!isEmpty(S))
            {
                char x = pop(S);
                if (x == '[')
                {
                    b = true;
                }
                else 
                  b = false;
               
            }
        }
        if (!isEmpty(S)) //check for input
        {
            b = false;
        }
        count++;
        
    }
    if ((b = true))
    {
        if (isEmpty(S))
        {
            cout << "Expression " << str << " is well-formed."; 
        }
    }    
    else if ((b = false))
    {
        if (! isEmpty(S))
        {
            cout << "Expression " << str << " is not well-formed.";       
        }
    }
        
 
    destroy(S);
    
    
}