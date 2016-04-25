#include <iostream>
#include <cassert>
#include "p2queue4.h"
using namespace std;

int main()
{
    /*
    double A = -8.15, B = 800.37, C;
    Queue<double> Q;
    initialize(Q);
    push(Q,A);
    cout << Q.data[0];
    cout << endl << getSize(Q) << endl << "Head: " << Q.head << endl;
    push(Q,B);
    cout << Q.data[1];
    C = pop(Q);
    cout << endl << C;
    assert(Q.data[1] == B);
    */
    char A = 'A', B = 'B', C = 'C', D = 'D', popped;

    Queue<char> Q;
    initialize(Q);
     
    assert(Q.head == 0);
    assert(Q.tail == 0);
    assert(isEmpty(Q));
    
    push(Q,A);
    assert(Q.data[0] == A);
    assert(Q.head == 0);
    assert(Q.tail == 1);
    
    popped = pop(Q);
    assert(popped == A);
    cout << "Popped: " << popped << endl;
    assert(Q.head == 1);
    assert(Q.tail == 1);
    assert(isEmpty(Q));
    assert(getSize(Q) == 0);
    assert(Q.size == 2);
    cout << Q.data[0] << endl;
    push(Q,B);
    assert(Q.data[1] == B);
    assert(Q.head == 1);
    assert(Q.tail == 0);
    assert(!isEmpty(Q));
    assert(getSize(Q) == 1);
    assert(Q.size == 2);
    cout << Q.data[0] << " and " << Q.data[1] << endl;
    push(Q,C);
    cout << Q.data[0] << " and " << Q.data[1];
    
    assert(Q.data[0] == B);
    assert(Q.data[1] == C);
    assert(Q.head == 0);
    assert(Q.tail == 2);
    assert(!isEmpty(Q));
    assert(getSize(Q) == 2);
    assert(Q.size == 4);
    
    popped = pop(Q);
    assert(popped == B);
    assert(Q.data[1] == C);
    assert(Q.head == 1);
    assert(Q.tail == 2);
    assert(getSize(Q) == 1);
    /*
    error:

    test.cpp:6: assert(Q.tail == 0) failed

    test.cpp:

    int N = -4;
    Queue<int> Q;
    initialize(Q);
    push(Q,N);
    destroy(Q);
    assert(Q.tail == 0);
    */
    // Add more function calls and assertions 
}