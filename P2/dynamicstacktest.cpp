#include <iostream>
#include <cassert>
#include "p2stack1.h"
using namespace std;

int main()
{
    //char A = 'A', B = 'B', C = 'C', popped;
    
    double A = 8.02, B = 19.52, C = -3.7, D;
    Stack<double> S;
    initialize(S);
    cout << "Top: " << S.top << endl;
    cout << "Size: " << S.size << endl;
    cout << "Push" << endl;
    push(S,A);
    cout << "Top: " << S.top << endl;
    cout << "Size: " << S.size << endl;
    cout << "Push" << endl;
    push(S,B);
    cout << "Top: " << S.top << endl;
    cout << "Size: " << S.size << endl;
    cout << "Push" << endl;
    assert(S.size == 2);
    push(S,C);
    
    destroy(S);
    assert(S.data == NULL);
    
    /*
    Stack<char> S;
    initialize(S);
    assert(S.top == 0);
    assert(isEmpty(S));
    assert(S.size == 2);
    //cout << "it's me" << endl;
    push(S,A);
   
    assert(S.data[0] == A);
    assert(S.top == 1);
    assert(!isEmpty(S));
    //cout << "I'm in California dreaming of who we used to be" << endl;
    push(S,B);
    assert(S.data[0] == A);
    assert(S.data[1] == B);
    assert(S.top == 2);
    
    push(S,C);
    assert(S.data[0] == A);
    assert(S.data[1] == B);
    assert(S.data[2] == C);
    //cout << "Hello from the other siiiiiiiiiiiiiiiiiiiide" << endl;
    assert(S.size == 4);
    assert(S.top == 3);
    //cout << "I must have called a thousand tiiiiiiiiiiiiiimes" << endl;   
    popped = pop(S);   
    assert(popped == C);
    assert(S.data[0] == A);
    assert(S.data[1] == B);
    assert(S.top == 2);
    assert(S.size == 4);
    */
    // Add more function calls and assertions 
    
}