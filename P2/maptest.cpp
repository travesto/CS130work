#include <iostream>
#include "p2map2.h"
#include <cassert>
using namespace std;

template <typename K, typename V>
void showMap(Map<K,V> M)
{
    cout << "Show me map" << endl;
    for (int i = 0; i < M.size; i++)
    {
        cout << "Array element " << i << " : ";
        Node<K,V>* w = M.table[i];
        while (w != NULL)
        {
            cout << "( " << w->key << ", " << " ), ";
            w = w->next;
        }
        cout << "NULL" << endl;
    }
}
int main()
{
    int K1 = 0, K2 = 154, K3 = 28;
    int V1 = -3, V2 = -5, V3 = -7;
    Map<int,int> M;
    initialize(M,14);
    assign(M,K1,V1);
    showMap(M);
    assign(M,K2,V2);
    showMap(M);
    assign(M,K3,V3);
    showMap(M);
    //assert(M.table[0]->key == K1);
    
    

}