#include <iostream>

using namespace std;
const int SIZE = 5;
	
template <typename T>
struct Queue {
   T   data[SIZE];
   int head;
   int tail;
};

template <typename T>
void initialize(Queue<T> &q)
{
    q.tail = 0;
    q.head = 0;
}

template <typename T>
void destroy(Queue<T> &q)
{
    q.tail = 0;
}

template <typename T>
int  getSize(Queue<T> q)
{
    if (q.tail < q.head)
    {
        return q.tail + (SIZE - q.head);
    }
    else 
         return q.tail - q.head;
}

template <typename T>
bool isEmpty(Queue<T> q)
{
    if (q.head == q.tail)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
void push(Queue<T> &q, T x)
{
    q.data[q.tail] = x;
    q.tail = (q.tail + 1) % SIZE;
}

template <typename T>
T    pop(Queue<T> &q)
{
    T a;
    a = q.data[q.head];
    q.head = (q.head + 1) % SIZE;
    return a;
}	
