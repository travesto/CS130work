#include "p2queue2.h"
using namespace std;
const int PQSIZE = 11;

template <typename T>
struct PriorityQueue {
   Queue<T> array[PQSIZE];
   int count;
};

template <typename T>
void initialize(PriorityQueue<T> &q)
{
    for (int i = 0; i < PQSIZE; i++)
    {
        initialize(q.array[i]);
    }
    q.count = 0;
}
template <typename T>
void destroy(PriorityQueue<T> &q)
{
    for (int i = 0; i < PQSIZE; i++)
    {
        destroy(q.array[i]);
    }
}

template <typename T>
int getSize(PriorityQueue<T> q)
{
     for (int i = 0; i <PQSIZE; i++)
     {
         q.count += getSize(q.array[i]);
         
     }
     return q.count;
}

template <typename T>
bool isEmpty(PriorityQueue<T> q)
{
     for (int i = 0; i <PQSIZE; i++)
     {
         q.count += getSize(q.array[i]);
         
     }
     if (q.count == 0)
        return true;
     return false;
}

template <typename T>
void push(PriorityQueue<T> &q, T x, int a)
{
    push(q.array[a], x);
    q.count++;
}

template <typename T>
T    pop(PriorityQueue<T> &q)
{
    T temp;
    for (int i = 10; i >= 0; i--)
    {
        while (!isEmpty(q.array[i]))
        {
            temp = pop(q.array[i]);
            q.count--;
            return temp;  
        } 
    }
}