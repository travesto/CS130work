#include <cstddef>
#include <iostream>
using namespace std;

template <typename K, typename V>
struct Node {
    K key;
    V value;
    Node<K,V>* next;
};

template <typename K, typename V>
struct Map {
    Node<K,V>** table;
    int size;
};
    
template <typename K, typename V>
void initialize(Map<K,V> &M, int size)
{    
    M.size = size;
    M.table = new Node<K,V>*[size];
    for (int i = 0; i < size; i++)
    {
        M.table[i] = NULL;
    }
}
template <typename K, typename V>
void destroy(Map<K,V> &M)
{
    for (int a = 0; a < M.size; a++)
    {
        if (M.table[a] != NULL)
        {
            Node<K,V>* walker = M.table[a];
            while (walker != NULL)
            {
                Node<K,V>* temp = walker;
                walker = walker->next;
                delete temp;
            }
        }
       
    } 
    M.size = 0; 
    delete [] M.table; 
    M.table = NULL;
}
// Overloaded hash functions, for different key types    
int hash(int key, int size) 
{ 
    return key % size;
}
int hash(char key, int size) 
{
    return key % size;
}
template <typename K, typename V>
void assign(Map<K,V> &M, K key, V value)
{
    Node<K,V>* input = new Node<K,V>;
    input->key = key;
    input->value = value;
    int hashedkey = hash(key, M.size);
   
    if (M.table[hashedkey] == NULL)
    {
        M.table[hashedkey] = input;
        input->next = NULL;
    }
    else if (has_key(M, key)) //update value
    {
        Node<K,V>* walker = M.table[hashedkey];
        if (walker->key == input->key)
        {
            walker->value = input->value;
            delete input;
        }
        else
            walker = walker->next;
            
    }
    else if (!has_key(M, key) && M.table[hashedkey] != NULL) //add value
    {
        Node<K,V>* walker = M.table[hashedkey];
        while (walker->next != NULL)
        {
            walker = walker->next;
        }
        walker->next = input;
        input->next = NULL;
        cout << "THERE'S NO CAKE?!" << endl;
    }
}

template <typename K, typename V>
void remove(Map<K,V> &M, K key)
{
    int hashed = hash(key, M.size);
    if (M.table[hashed] != NULL)
    {
        Node<K,V>* todd = M.table[hashed];
        while (todd != NULL)
        {
            if (todd->key == key)
            {
                Node<K,V>* ben = M.table[hashed];
                while (ben->next != NULL)
                {
                    if (ben->next->key == key)
                    {
                        ben->next = todd->next;
                        delete todd;
                        return;
                    }
                    ben = ben->next;
                }
                M.table[hashed] = todd->next;
                delete todd;
                return;
            }
            todd = todd->next; 
        } 
    } 
}
template <typename K, typename V>
bool has_key(Map<K,V> M, K key)
{
    int index = hash(key, M.size);
    // if (M.table[index] == NULL)
    // {
    //     return false;
    // }
    Node<K,V>* greg = M.table[index];
    while (greg != NULL)
    {
        if (greg->key == key)
        {
            return true;
        }
        greg = greg->next;
    }
    return false;   
}
template <typename K, typename V>
V    lookup(Map<K,V> M, K key)
{
    int hashed = hash(key, M.size);
    V value;
    Node<K,V>* walker = M.table[hashed];
    while (walker != NULL)
    {
        if (walker->key == key)
        {
            value = walker->value;
        }
        walker = walker->next;        
    }
    return value;
}