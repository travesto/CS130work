#include <iostream>
#include <cassert>
#include "p2priorityqueue1.h"
using namespace std;

int main()
{
    char A = 'A', B = 'B', C = 'C', Q = 'Q', M = 'M', V = 'V', T = 'T', popped;
    
    PriorityQueue<char> PQ;
    initialize(PQ);
    
    assert(isEmpty(PQ));
    
    push(PQ,A,5);
    assert(!isEmpty(PQ));
    assert(getSize(PQ) == 1);
    cout << getSize(PQ) << endl;
    push(PQ,B,7);
    push(PQ,C,5);
    cout << getSize(PQ) << endl;
    popped = pop(PQ);
    assert(popped == B); // highest priority
    
    popped = pop(PQ);
    assert(popped == A); // two of equal priority, but A longer in PQ
    assert(!isEmpty(PQ));
    popped = pop(PQ);
    popped = pop(PQ);
    cout << getSize(PQ);
    
    // Add more function calls and assertions 
}