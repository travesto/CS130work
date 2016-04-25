 #include <cstddef>
#include <iostream>
using namespace std;

 const int HEAPSIZE = 128;

 template <typename T>
 struct Heap {
   T  data[HEAPSIZE];
   int size;
 };
 
 template <typename T>   
 void initialize(Heap<T> &H)
 {
     H.size = 0;
 }
 template <typename T>
 void destroy(Heap<T> &H)
 {
     H.size = 0;
 }
 template <typename T>
 void put(Heap<T> &H, T value)
 {
    int index;
    H.size++;
    H.data[H.size] = value;
    if (H.size >= 2)
    {
        index = H.size;
        while (index/2 >= 1)
        {
            if (H.data[index] < H.data[index/2])
            {
                T temp = H.data[index];
                H.data[index] = H.data[index/2];
                H.data[index/2] = temp;
                index /= 2;
            }
            else
                break;  
        }
    }
        
 }
//  template<typename T>
//  void heapify(Heap<T> &H, int root)
//  {
//     int index = root;
//     int left, right;
//     T temp;
//     left = (2*index);
//     right = (2*index)+1;
//     cout << root;
//     while (index*2 <= H.size)
//     {
//         if (H.data[left] < H.data[right])
//         {
//             if (H.data[left] < H.data[index])
//             {
//                 temp = H.data[index];
//                 H.data[index] = H.data[left];
//                 H.data[left] = temp;
//                 index *= 2;
//                 heapify(H,index);
//             }
//             cout << index;
//         }
//         else if (H.data[left] > H.data[right])
//         {
//             if (H.data[right] < H.data[index])
//             {
//                 temp = H.data[index];
//                 H.data[index] = H.data[right];
//                 H.data[right] = temp;
//                 index = (index*2)+1;
//                 heapify(H,index);
//             }
//             cout << index;

//         }
//     }
//  }
 
 template <typename T>
 T    get(Heap<T> &H)
 {
    
    T getvalue = H.data[1];
    H.data[1] = H.data[H.size];
    int index = 1;
    while (true)
    {
        if (H.data[index*2] < H.data[(index*2)+1] && H.data[index*2] < H.data[index] && index*2 <= H.size)
        {
                T temp = H.data[index*2];
                H.data[index*2] = H.data[index];
                H.data[index] = temp;
                index *= 2;
        }
        else if (H.data[index*2] > H.data[(index*2)+1] && H.data[(index*2)+1] < H.data[index] && (index*2)+1 <= H.size)
        {
                T temp = H.data[(index*2)+1];
                H.data[(index*2)+1] = H.data[index];
                H.data[index] = temp;
                index = (index*2)+1;
        }
                // cout << "heap" << endl;
        else
            break;
        
    }  
    H.size--;  
    return getvalue;    
 }
 template <typename T>
 bool isEmpty(Heap<T> H)
 {
     if (H.size == 0)
     {
         return true;
     }
     else
     {
         return false;
     }
 }