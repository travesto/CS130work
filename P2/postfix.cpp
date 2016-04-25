#include <iostream>
#include <sstream>
#include "p2stack.h"
using namespace std;

int stringToInt(string s)
{
    int value = 0, index = 0;
    while( s[index] )
    {
        value = value*10 + (s[index++]-'0');
    }   
    return value;
}

int main()
{
    bool valid = true;
    Stack<int> stacky;
    initialize(stacky);
    string items[100];
    string input, numbers;
    int a, b, index = 0;
    
    cout << "Enter a postfix expression:" << endl;
    getline(cin, input);
    
    stringstream ss(input);
    while (ss >> items[index])
    {
        if (items[index] == "+")
        {
            if (!isEmpty(stacky))
            {
                a = pop(stacky);
                if (!isEmpty(stacky))
                {
                    b = pop(stacky);
                    push(stacky, (b+a));   
                }
                else
                {
                    valid = false;
                }
            }   
            else
            {
                valid = false;
            }
        }
        else if (items[index] == "-")
        {
            if (!isEmpty(stacky))
            {
                a = pop(stacky);
                if (!isEmpty(stacky))
                {
                    b = pop(stacky);
                    push(stacky, (b-a));   
                }
                else
                {
                    valid = false;
                }
            }   
            else
            {
                valid = false;
            }   
        }
        else if (items[index] == "*")
        {
            if (!isEmpty(stacky))
            {
                a = pop(stacky);
                if (!isEmpty(stacky))
                {
                    b = pop(stacky);
                    push(stacky, (b*a));   
                }
                else
                {
                    valid = false;
                }
            }   
            else
            {
                valid = false;
            }
        }
        else
        {
            numbers = items[index];
            push(stacky, stringToInt(numbers));
        }
        index++;   
    }
    cout << endl;
    if (valid == true )
    {
        int r = pop(stacky);
        if (!isEmpty(stacky))
        {
            cout << "Invalid expression."; 
        }
        else
        {
            cout << "Result: " << r << endl;
        } 
    }
    else
    {
       cout << "Invalid expression."; 
    }
}
