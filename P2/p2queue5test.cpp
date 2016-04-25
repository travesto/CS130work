#include <iostream>
#include <cassert>
#include "p2queue5.h"
using namespace std;

int main()
{
    char A = 'A', B = 'B', C = 'C', D = 'D', popped;

    Queue<char> Q;
    initialize(Q);
    
    assert(Q.head == NULL);
    assert(Q.tail == NULL);
    assert(getSize(Q) == 0);
    assert(isEmpty(Q));
    
    push(Q,A);
    assert(Q.head != NULL);
    assert(Q.head->value == A);
    assert(Q.head->next == NULL);
    assert(Q.tail != NULL);
    assert(Q.tail->value == A);    
    assert(getSize(Q) == 1);
    assert(!isEmpty(Q));
    
    popped = pop(Q);
    assert(popped == A);
    assert(Q.head == NULL);
    assert(Q.tail == NULL);
    assert(isEmpty(Q));
    assert(getSize(Q) == 0);
    
    push(Q,B);
    assert(Q.head != NULL);
    assert(Q.head->value == B);
    assert(Q.head->next == NULL);
    assert(Q.tail != NULL);
    assert(Q.tail->value == B);
    assert(getSize(Q) == 1);
    assert(!isEmpty(Q));

    push(Q,C);
    assert(Q.head != NULL);
    assert(Q.head->value == B);
    assert(Q.head->next != NULL);
    assert(Q.head->next->value == C);
    assert(Q.head->next->next == NULL);
    assert(Q.tail != NULL);
    assert(Q.tail->value == C);
    assert(getSize(Q) == 2);
    assert(!isEmpty(Q));
    
    popped = pop(Q);
    assert(popped == B);
    assert(Q.head != NULL);
    assert(Q.head->value == C);
    assert(Q.head->next == NULL);
    assert(Q.tail != NULL);
    assert(Q.tail->value == C);
    assert(getSize(Q) == 1);
    assert(!isEmpty(Q));    
    
    destroy(Q);
    assert(Q.head == NULL);
    assert(Q.tail == NULL);
    // Add more function calls and assertions 
}