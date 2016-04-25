#include<iostream>
using namespace std;
template <typename V, typename R>
struct Node {
    V value;
    R priority;
    Node<V,R>* next;
    Node<V,R>* prev;
};

template <typename V, typename R>
struct PriorityQueue {
    Node<V,R>* head;
};

template <typename V, typename R>
void initialize(PriorityQueue<V,R> &P)
{
    P.head = NULL;
}

template <typename V, typename R>
void destroy(PriorityQueue<V,R> &P)
{
    P.head->prev->next = NULL;
    while (P.head != NULL)
    {
        Node<V,R>* x = P.head->next;
        delete P.head;
        P.head = x;
        delete x;
    }
}

template <typename V, typename R>
bool isEmpty(PriorityQueue<V,R> P)
{
    return (P.head == NULL);
}

template <typename V, typename R>
void push(PriorityQueue<V,R> &P, V input, R rank)
{
    Node<V,R>* add = new Node<V,R>;
    add->value = input;
    add->priority = rank;

    if (isEmpty(P))
    {
       P.head = add;
       add->next = add;
       add->prev = add;
    }
    else if (add->priority > (P.head->priority))
    {

        add->prev = P.head->prev;
        P.head->prev->next = add;
        P.head->prev = add;
        add->next = P.head;
        P.head = add;
    }
    else if (add->priority <= (P.head->prev->priority))
    {
        P.head->prev->next = add;
        P.head->prev = add;
        add->next = P.head;

    }
    else //rank in between
    {
        Node<V,R>* walker = P.head->next;
        while(walker != P.head)
        {
            //cout << walker->value << "|" << walker->priority << endl;
            if (add->priority < walker->prev->priority && add->priority > walker->priority)
            {
                //cout << walker->value << endl<< walker->next->value<<endl<<walker->prev->value;
                add->prev = walker->prev;
                walker->prev->next = add;
                walker->prev = add;
                add->next = walker;
                //cout << endl << P.head->value << endl << P.head->next->value << endl << P.head->next->next->value << endl << endl;
            }
            walker = walker->next;
            //cout << walker->value << "|" << walker->priority << endl;

        }
        //cout << walker->value << "|" << walker->priority << endl;
    }
}

template <typename V, typename R>
V    pop(PriorityQueue<V,R> &P)
{
    V popped;
    popped = P.head->value;
    Node<V,R>* oldhead = P.head;
    if (P.head == P.head->next)
    {
        P.head = NULL;
        return popped;
    }
    else
    {
        P.head->next->prev = P.head->prev;
        P.head->prev->next = P.head->next;
        P.head = P.head->next;
    }
    delete oldhead;
    return popped;

}