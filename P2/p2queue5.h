#include <cstddef>
#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T value;
    Node<T>* next;
};
	
template <typename T>
struct Queue {
    Node<T>* head;
    Node<T>* tail;
};

template <typename T>
void initialize(Queue<T> &Q)
{
    Q.head = NULL;
    Q.tail = NULL;
}
template <typename T>
void destroy(Queue<T> &Q)
{
    while (Q.head != NULL)
    {
        Node<T>* x = Q.head->next;
        delete Q.head;
        Q.head = x;
    }
    Q.tail = NULL;
}
template <typename T>
int  getSize(Queue<T> &Q)
{
    int count = 0;
    Node<T>* walker = Q.head;
    while (walker != NULL)
    {
        count++;
        walker = walker->next;
    }
    return count;
}

template <typename T>
bool isEmpty(Queue<T> Q)
{
    return (Q.head == NULL);
}
template <typename T>
void push(Queue<T> &Q, T v)
{
    Node<T>* add = new Node<T>;
    add->value = v;
    add->next = NULL;
    
    if (Q.head == NULL)
    {
        Q.head = add;
        Q.tail = add;
       // cout << "More Help";
    }
    else
    {
        Q.tail->next = add;
        Q.tail = add;
     //   cout << "Even more help"; 
    }
}

template <typename T>
T    pop(Queue<T> &Q)
{
    T temp;
    temp = Q.head->value;
    Node<T>* next = Q.head;
    Q.head = Q.head->next;
    delete next;
    
    if (isEmpty(Q))
    {
        Q.tail = NULL;   
    }
    return temp;
    
}