#include <iostream>
#include <cassert>
#include "p2stack2.h"
using namespace std;

int main()
{
    char A = 'A', B = 'B', C = 'C', popped;

    Stack<char> S;
    initialize(S);
    
    assert(S.top == NULL);
    assert(isEmpty(S));
    
    push(S,A);
    assert(S.top->value == A);
    assert(!isEmpty(S));
    
    push(S,B);
    assert(S.top->value == B);
    assert(S.top->next->value == A);
    
    push(S,C);
    assert(S.top->value == C);
    assert(S.top->next->value == B);
    assert(S.top->next->next->value == A);
        
    popped = pop(S);
    assert(S.top->value == B);
    assert(S.top->next->value == A);
    
    destroy(S);
    assert(isEmpty(S));
    assert(S.top == NULL);
    // Add more function calls and assertions 
}