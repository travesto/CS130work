#include <iostream>
#include <cassert>
#include "p2priorityqueue2.h"
using namespace std;

int main()
{
     // push 3, pop 2, push 1, pop 1, push 3, pop 2, push 1, pop 3 [now empty]
    double A = 1.1, B = 2.3, C = 3.03, D = 4.14, E = 5.16, F = -6.5, G = 7.0, H = 8.2, V;
    PriorityQueue<double,int> PQ;
    initialize(PQ);
    // push 3
    push(PQ,A,8);
    push(PQ,B,10);
    push(PQ,C,2);
    // pop 2
    V = pop(PQ);
    V = pop(PQ);
    // push 1
    push(PQ,D,3);
    // pop 1
    V = pop(PQ);
    // push 3
    push(PQ,E,4);
    push(PQ,F,7);
    push(PQ,G,3);
    // pop 2
    cout << endl << PQ.head->value << endl;
    cout << PQ.head->next->value << endl;
    cout << PQ.head->next->next->value << endl;
    cout << PQ.head->next->next->next->value << endl;

    V = pop(PQ);
    cout << V << endl;
    assert(V == F);
    V = pop(PQ);
    cout << V;
    
    //  char C = 'K', D;
    // PriorityQueue<char,int> PQ;
    // initialize(PQ);
    // push(PQ,C,8);
    // D = pop(PQ);
    // assert(PQ.head == NULL);
//     char A = 'A', B = 'B', C = 'C', popped;

//     PriorityQueue<char,int> PQ;
//     initialize(PQ);
    
//     assert(PQ.head == NULL);
//     assert(isEmpty(PQ));
    
//     push(PQ,A,5);
//     assert(PQ.head != NULL);
//     assert(PQ.head->value == A);
//     assert(PQ.head->priority == 5);
//     assert(PQ.head->next == PQ.head);
//     assert(PQ.head->prev == PQ.head);
//     assert(!isEmpty(PQ));

//     push(PQ,B,7);
//     assert(PQ.head != NULL);
//     assert(PQ.head->value == B);
//     assert(PQ.head->priority == 7);
//     assert(PQ.head->next != PQ.head);
//    // cout << PQ.head->next << endl << PQ.head->prev;
//     assert(PQ.head->next == PQ.head->prev);
//     assert(PQ.head->next->value == A);
//     assert(PQ.head->next->priority == 5);
//     assert(PQ.head->next->next == PQ.head);
    
// //    push(PQ,C,6);
// //     cout << endl << PQ.head->value << endl << PQ.head->next->value << endl << PQ.head->next->next->value << endl << endl;
//     push(PQ,C,5);
//     assert(PQ.head != NULL);
//     assert(PQ.head->value == B);
//     assert(PQ.head->priority == 7);
//     assert(PQ.head->next->value == A);
//     assert(PQ.head->next->priority == 5);
//     // cout << PQ.head->next->next->value;
//     assert(PQ.head->next->next->value == C);
//     assert(PQ.head->next->next->priority == 5);
//     assert(PQ.head->next->next->next == PQ.head);
//     assert(PQ.head->prev == PQ.head->next->next);
    
//     popped = pop(PQ);
//     assert(popped == B); // highest priority
//     assert(PQ.head->value == A);
//     assert(PQ.head->priority == 5);
//     assert(PQ.head->next != PQ.head);
//     assert(PQ.head->next == PQ.head->prev);
//     assert(PQ.head->next->value == C);
//     assert(PQ.head->next->priority == 5);
//     assert(PQ.head->next->next == PQ.head);    
    
//     popped = pop(PQ);
//     assert(popped == A); // two of equal priority, but A longer in PQ
//     assert(PQ.head->value == C);
//     assert(PQ.head->priority == 5);
//     assert(PQ.head->next == PQ.head);
//     assert(PQ.head->prev == PQ.head);
    
//     push(PQ,B,6);
//     push(PQ,A,9);
//     cout << endl << PQ.head->value << endl << PQ.head->next->value << endl << PQ.head->next->next->value << endl << endl;
//     destroy(PQ);
//     assert(isEmpty(PQ));
    // Add more function calls and assertions
}