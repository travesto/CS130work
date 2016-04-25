#include <iostream>
#include <cassert>
#include "p2heap.h"
using namespace std;

int main()
{
       //input one
   int A = 5, B = 6, C = 1, D = 10, E = 18, F = 27, G = 4, H = 19, S;
   //input two
   int I = 3, J = 12, K = 30, L = 15, M = 4;
   Heap<int> T;
   initialize(T);
   put(T,A);
   put(T,B);
   put(T,C);
   put(T,D);
   put(T,E);
   put(T,F);
   put(T,G);
   put(T,H);
   S = get(T);
   S = get(T);
   S = get(T);
   put(T,I);
   put(T,J);
   put(T,K);
   put(T,L);
   put(T,M);
   for (int i = 1; i < 11; i++)
   {
       cout << T.data[i] << endl;
   }
   
  // assert(T.data[4] == L);
//    int A = 5, B = 7, C = 8, D = 6, E = 1, S;
//    Heap<int> T;
//    initialize(T);
//    put(T,A);
//    put(T,B);
//    put(T,C);
//    put(T,D);
//    put(T,E);
   
//    assert(T.data[1] == E);
//     //input one
//     int A = 5, B = 6, C = 1, D = 10, E = 18, F = 27, G = 4, H = 19, S;
//     //input two
//     int I = 3, J = 12, K = 30, L = 15, M = 4;
//     Heap<int> T;
//     initialize(T);
//     put(T,A);
//     put(T,B);
//     put(T,C);
//     put(T,D);
//     put(T,E);
//     put(T,F);
//     put(T,G);
//     put(T,H);
//     S = get(T);
//     S = get(T);
//     S = get(T);
//     put(T,I);
//     put(T,J);
//     put(T,K);
//     put(T,L);
//     put(T,M);
//    for (int i = 1; i < 12; i++)
//     {
//         cout << T.data[i] << endl;
//     }
   
//     assert(T.data[2] == M);
    
    // char A = 'A', B = 'B', C = 'C', D = 'D', got;
    
    // Heap<char> H;
    // initialize(H);
    
    // assert(H.size == 0);
    // assert(isEmpty(H));
    
    // put(H,C);
    // assert(H.data[1] == C);
    // assert(H.size == 1);
    // assert(!isEmpty(H));
    
    // put(H,A);
    // assert(H.data[1] == A);
    // assert(H.data[2] == C);
    // assert(H.size == 2);
    
    // put(H,D);
    // assert(H.data[1] == A);
    // assert(H.data[2] == C);
    // assert(H.data[3] == D);
    // assert(H.size == 3);
    
    // put(H,B);
    // assert(H.data[1] == A);
    // assert(H.data[2] == B);
    // assert(H.data[3] == D);
    // assert(H.data[4] == C);
    // assert(H.size == 4);    
    // for (int i = 1; i < 5; i++)
    // {
    //     cout << H.data[i] << endl;
    // }
    // cout << "Remove" << endl;
    // got = get(H);
    // for (int i = 1; i < 4; i++)
    // {
    //     cout << H.data[i] << endl;
    // }
    // assert(got == A);
    // assert(H.data[1] == B);
    // assert(H.data[2] == C);
    // assert(H.data[3] == D);    
    // assert(H.size == 3);
    
    // got = get(H);
    // assert(got == B);
    // assert(H.data[1] == C);
    // assert(H.data[2] == D);
    // assert(H.size == 2);    
    
    
    //Add more function calls and assertions 
}