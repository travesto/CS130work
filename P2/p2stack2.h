#include <cstddef>

template <typename T>
struct Node {
   T value;
   Node<T>* next;
};

template <typename T>
struct Stack {
   Node<T>* top;
};

template <typename T>
void initialize(Stack<T> &S)
{
    S.top = NULL;
}

template <typename T>
void destroy(Stack<T> &S)
{
    while (S.top != NULL)
    {
        Node<T>* i = S.top;
        S.top = S.top ->next;
        delete i;
    }
    // Node<T>* before = S.top;
    // S.top = S.top->next;
    // delete before;   
}
template <typename T>
bool isEmpty(Stack<T> S)
{
    if (S.top != NULL)
    {
        return false;
    }
    else
        return true;
}
template <typename T>
void push(Stack<T> &S, T data)
{
    Node<T>* newNode = new Node<T>;
    newNode->value = data;
    newNode->next = S.top;
    S.top = newNode;
    
    if (S.top == NULL)
    {
        S.top = newNode;
        return;
    }
}
template <typename T>
T    pop(Stack<T> &S)
{
    T temp;
    temp = S.top->value;
    Node<T>* before = S.top;
    S.top = S.top->next;
    delete before;
    return temp;
}