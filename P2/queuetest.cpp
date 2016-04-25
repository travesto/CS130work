#include <iostream>
#include <cassert>
#include "p2queue2.h"
using namespace std;

int main()
{
    /*
    char A = 'A', B = 'B', C = 'C', popped;

    Queue<char> Q;
    initialize(Q);
    
    assert(Q.head == 0);
    assert(Q.tail == 0);
    assert(isEmpty(Q));
    
    push(Q,A);
    assert(Q.data[0] == A);
    assert(Q.head == 0);
    assert(Q.tail == 1);
    
    push(Q,B);
    assert(Q.data[0] == A);
    assert(Q.data[1] == B);
    assert(Q.head == 0);
    assert(Q.tail == 2);
    assert(getSize(Q) == 2);
    
    popped = pop(Q);
    assert(popped == A);
    assert(Q.data[1] == B);
    assert(Q.head == 1);
    assert(Q.tail == 2);
    assert(getSize(Q) == 1);
    */
     // push 3, pop 2, push 1, pop 1, push 3, pop 2, push 1, pop 3 [now empty]
    double A = 1.1, B = 2.3, C = 3.03, D = 4.14, E = 5.16, F = -6.5, G = 7.0, H = 8.2, V;
    Queue<double> Q;
    initialize(Q);
    // push 3
    push(Q,A);
    push(Q,B);
    push(Q,C);
    // pop 2
    V = pop(Q);
    cout << V << endl;
    V = pop(Q);
    cout << V << endl;
    // push 1
    push(Q,D);
    // pop 1
    V = pop(Q);
    cout << V << endl;
    // push 3
    push(Q,E);
    push(Q,F);
    push(Q,G);
    
    cout << Q.tail << endl << Q.head << endl << getSize(Q);
    //assert(Q.tail == 2 && getSize(Q) == 4 && !isEmpty(Q));
}