#include <cstddef>

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
    M.table[size];
    for (int i = 0; i < size; i++)
    {
        M.table[i] = NULL;
    }
}
template <typename K, typename V>
void destroy(Map<K,V> &M)
{
    Node<K,V>* walker = new Node<K,V>;
    for (int a = 0, a < M.size, a++)
    {
        walker = M.table[a];
        while (walker->next != NULL)
        {
            Node<K,V>* temp = new Node<K,V>;
            temp = walker;
            walker = walker->next;
            temp = NULL;
        }
    }  
    delete [] M.table; 
}
template <typename K, typename V>
void assign(Map<K,V> &M, K key, V value)
{
    Node<K,V>* input = new Node<K,V>;
    input->key = key;
    input->value = value;
    K hashedkey = hash(key);
   
    if (! has_key(M, key))
    {
        M.table[hashedkey] = input;
        input->next = NULL;
    }
    else if (has_key(M, key) //update value
    {
        Node<K,R>* walker = M.table[hashedkey];
        if (walker->key == input->key)
        {
            walker->value = input->value;
        }
        else
            walker = walker->next;
            
    }
    else if (!has_key && M.table[hashedkey] != NULL) //add value
    {
        Node<K,R>* walker = M.table[hashedkey];
        while (walker->next != NULL)
        {
            walker = walker->next;
        }
        walker->next = input;
    }
     
}
template <typename K, typename V>
void remove(Map<K,V> &M, K key)
{
    
}
template <typename K, typename V>
bool has_key(Map<K,V> M, K key)
{
    hash(key) = K index;
    if (M.table[index] == NULL)
    {
        return false;
    }
    else
    {
        Node<K,V>* greg = M.table[index];
        while (greg->next != NULL)
        {
            if (greg->key == key)
            {
                return;
            }
            greg = greg->next;
        }
   
    }    
}
template <typename K, typename V>
V    lookup(Map<K,V> M, K key)
{
    hash(key) = hashed;
    Node<K,R>* walker = new Node<K,R>;
    walker = M.table[hashed];
    while (walker != NULL && walker->value != key)
    {
        walker = walker->next;        
    }
    return walker->value;
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