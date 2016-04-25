#include <cstddef>
#include <iostream>
using namespace std;


template <typename T>
struct Set {
    T* data;
    int size;        
    int count;
};

template <typename T>
void initialize(Set<T> &s)
{
    s.data = new T[2];
    s.size = 2;
    s.count = 0;
}
template <typename T>
void destroy(Set<T> &s)
{
    delete [] s.data;
    s.data = NULL;
    s.count = 0;
    s.size = 0;
}
template <typename T>
bool isEmpty(Set<T> s)
{
    if (s.count == 0)
        return true;
    else
        return false;
}
template <typename T>
void insert(Set<T> &s, T value)
{
    if (! contains(s, value))
    {
        if (s.count == s.size)
        {
            T* temp = new T [s.size*2];
            for (int a = 0; a < s.size; a++)
            {
                temp[a] = s.data[a];
            }
            delete [] s.data;
            s.data = temp;
            temp = NULL;
            s.size *= 2;
        }  
        s.data[s.count] = value;
        s.count++;
    }
}
template <typename T>
bool contains(Set<T> s, T value)
{
    for (int a = 0; a < s.count; a++)
    {
        if (s.data[a] == value)
        {
            return true;
        }
    }
    return false;  
}
template <typename T>
void remove(Set<T> &s, T value)
{
    if (contains(s, value))
    {
        //cout << "It contains" << endl;
        for (int i = 0; i < s.count; i++)
        {
            if (s.data[i] == value)
            {
                //cout << "blah" << endl;
                s.data[i] = s.data[s.count-1];
                s.count--;
                //if (s.count < 0)
                //{
                //    s.count = 0;
                //}
            }
            
        }   
    }
    
}
template <typename T>
int  getSize(Set<T> s)
{
    return s.count;
}

 // New functions
template <typename T>
Set<T> operator&&(Set<T> a,Set<T> b)  // intersection
{
    Set<T> blerg;
    for (int i = 0; i <= getSize(a); i++)
    {
        insert(blerg, a.data[i])
        for (int a = 0; a <= getSize(b; i++)
        {
            if (a.data[i] != b.data[a])
            {
                insert(blerg, b.data[a]);
            }
        }
    }
    return blerg;
}
template <typename T>
Set<T> operator||(Set<T> a, Set<T> b)  // union
{
    Set<T> blerg;
    for (int i = 0; i <= getSize(a); i++)
    {
        insert(blerg, a.data[i])
    }
    for (int a = 0; a <= getSize(b; i++)
    {
        if (! contains(blerg, b.data[a]))
        {
            insert(blerg, b.data[a]);
        }
    }
    return blerg;
}
template <typename T>
Set<T> operator-(Set<T> a, Set<T> b)   // difference
{
    Set<T> blerg;
    for (int i = 0; i <= getSize(a); i++)
    {
        insert(blerg, a.data[i])
        for (int a = 0; a < getSize(b; i++)
        {
            if (a.data[i] == b.data[a])
            {
                remove(blerg, b.data[a]);
            }
        }
    }
    return blerg;
}
