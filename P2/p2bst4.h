#include <cstddef>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T     data;
    Node<T>* left;
    Node<T>* right;
};

template <typename T>
struct Tree {
    Node<T>* root;
};

template <class T>
void initialize(Tree<T> &t)
{
    t.root = NULL;
}

template <class T>
void destroy(Node<T>* n)
{
    if( n == NULL )
        return;
    
    destroy(n->left);  // Recursively destroy left subtree
    destroy(n->right); // Recursively destroy right subtree
    delete n;          // Delete this node
}

template <class T>
void destroy(Tree<T> &t)
{
    destroy(t.root);
    t.root = NULL;
}

template <class T>
void insert(Tree<T> &t, T value)
{
    // Create new node to add to tree
    Node<T>* newNode = new Node<T>;
    newNode->data  = value;
    newNode->left  = NULL;
    newNode->right = NULL;
    
    if( t.root == NULL ) { // empty tree
        t.root = newNode;
        return;
    }
        
    Node<T>* walker = t.root;
    while( true )
    {
        if( walker->data > value )
        {
            if( walker->left == NULL )
            {
                walker->left = newNode;
                return;
            }
            else
                walker = walker->left;
        }
        else // walker->data < value
        {
            if( walker->right == NULL )
            {
                walker->right = newNode;
                return;
            }
            else
                walker = walker->right;            
        }
    }
}

template<class T>
int contains(Tree<T> &t, T value)
{
    Node<T>* walker = t.root;
    int depth = 0;
    
    while( walker != NULL )
    {
        if( walker->data == value )
            return depth;
        else if( walker->data > value )
            walker = walker->left;
        else // walker->data < value
            walker = walker->right;
        depth++;
    }
    return -1;
}

template<class T>
int  countNodes(Node<T>* n)
{
    if( n == NULL )
        return 0;
    else
    {
        return (countNodes(n->left) + countNodes(n->right) + 1);   
    }
}
template<class T>
int countNodes(Tree<T> &t)
{
    return countNodes(t.root);
}

template<class T>
int height(Node<T>* n)
{
    if (n == NULL)  
    {
        return -1;
    }
    else
    {
        if (height(n->left) > height(n->right))
        {
            return height(n->left) + 1;   
        }
        else
        {
            return height(n->right) + 1;
        }
    }
}

template<class T>
int  height(Tree<T> t)
{
    return height(t.root);
}

template<class T>
T    minValue(Tree<T> t)
{
    Node<T>* LukeSkywalker = t.root;
    while (LukeSkywalker != NULL)
    {
        if (LukeSkywalker->left == NULL)
        {
            return LukeSkywalker->data;
        }
        else
        {
            LukeSkywalker = LukeSkywalker->left;
        }
    }
    return LukeSkywalker->data;
}

template<class T>
T    maxValue(Tree<T> t)
{
    Node<T>* LukeSkywalker = t.root;
    while (LukeSkywalker != NULL)
    {
        if (LukeSkywalker->right == NULL)
        {
            return LukeSkywalker->data;
        }
        else
        {
            LukeSkywalker = LukeSkywalker->right;
        }
    }
    return LukeSkywalker->data;
}

template<class T>
int countLeaf(Node<T>* n)
{
    if (n == NULL) //if n == null 0 
    {
        return 0;
    }
    else if (n->left == NULL && n->right == NULL)
    {
        return 1;
    }
    else if (n->right != NULL && n->left == NULL)
    {
        return countLeaf(n->right);
    }
    else if (n->right == NULL && n->left != NULL)
    {
        return countLeaf(n->left);
    }
    else
        return (countLeaf(n->left) + countLeaf(n->right));
    
}

template<class T>
int  countLeaf(Tree<T> t)
{
    return countLeaf(t.root);
}
template<class T>
int  countSingle(Tree<T> t)
{
    return countNodes(t.root) - countDouble(t.root) - countLeaf(t.root);
}

template<class T>
int countDouble(Node<T>* n)
{
    if (n == NULL) //if n == null 0 
    {
        return 0;
    }
    return countDouble(n->left) + countDouble(n->right) + (n->left != NULL && n->right != NULL); 
    // else if (n->left != NULL && n->right != NULL)
    // {
    //     return (countLeaf(n->left) + countLeaf(n->right) - 1);
    // }
    // else if (n->right != NULL && n->left == NULL)
    // {
    //     return countLeaf(n->right);
    // }
    // else if (n->right == NULL && n->left != NULL)
    // {
    //     return countLeaf(n->left);
    // }
    // else
    //     return 0;    
}

template<class T>
int  countDouble(Tree<T> t)
{
    return countDouble(t.root);
}
template<class T>
T kthValue(Node<T>* n, int k)
{
    T L = countNodes(n->left);
    while (n->data != k)
    {
        if (k == L+1) //k equals root
        {
            return n->data;
        }
        else if (k < L + 1) //k is in left tree
        {
            return kthValue(n->left, k);
        }
        else if (k > L+1) // k is in right tree
        {
           k -= (countNodes(n->left) + 1);
           return kthValue(n->right, k);
        }
    }
    return 0;
    //k= k-L+1 decrease k by how many nodes in left when going right
    // K changes when going down to the right
}

template<class T>
T    kthValue(Tree<T> t, int k)
{
    return kthValue(t.root, k);
}
template<class T>
void remove(Tree<T> &t, T value)
{
    if (contains(t, value) == -1)
    {
        return;
    }
    else if (t.root->data == value) //root removal
    {
        cout << "Root removal" << endl;
        if ((t.root->right != NULL && t.root->left == NULL) || (t.root->right == NULL && t.root->left != NULL))// single child
        {
            if (t.root->left != NULL) //left child
            {
                Node<T>* temp = t.root;
                t.root = temp->left;
                delete temp;
                cout << "TEST";
                return;
            }
            else if (t.root->right != NULL) //right child
            {
                Node<T>* trump = t.root;
                t.root = trump->right;
                delete trump;
                cout << "THERE'S NO CAKE?!" << endl;
                return;
            }
        }
        else if (t.root->right != NULL && t.root->left != NULL) // two children
        {      
            Node<T>* temp;
            Node<T>* hold = t.root->left;
            Node<T>* walker = t.root->right;
            temp = walker;
            Node<T>* parent = walker;
            while (walker->left != NULL)
            {
                parent = walker;
                walker = walker->left;
            }
            if (walker->right != NULL)
            {
                if (parent != temp) //walker->right != NULL
                {
                    parent->left = walker->right;   
                }
                else if (temp->right == NULL)
                {
                    temp->left = walker->right;
                }   
                else if (walker->left == NULL)
                {
                    temp = walker->right;
                }  
                cout << "MEOW";       
            }
            else
            {
                temp->left = NULL;
                cout << "Aqui";
            }
            // if (walker->right == NULL)
            // {
            //     walker->right = temp;
            //     temp->left = NULL;
            // }
            // else if (walker->right != NULL)
            // {
            //     if (temp->right == NULL)
            //     {
            //         temp->left = walker->right;
            //     }
            //     else
            //     {
            //         temp = walker->right;
            //     }
            // }
            cout << temp->data << endl << parent->data;
            delete t.root;
            t.root = walker;
            //*temp = walker;
            //t.root = *temp;
            t.root->left = hold;
            t.root->right = temp;
            cout << "BLERG";

        }
        else if (t.root->right == NULL && t.root->left == NULL)// only root
        {
            
            delete t.root;
            t.root = NULL;
            return;
        }
        return;
    }
    else
    {
        return remove(t.root, value);
    }
}
template<class T>
void remove(Node<T>* n, T value)
{
    Node<T>* walker = n;
    Node<T>* parent = n;
    if (n == NULL)
    {
        return;
    }
    while( walker != NULL ) // find value node and parent
    {
        if( walker->data == value )
        {
            break;
        }
        else 
        {     
            parent = walker;
            if( walker->data > value )
            {    
                parent = walker;
                walker = walker->left;
            }
            else // walker->data < value
            {
                parent = walker;
                walker = walker->right;
            }
        }
    }
    // value is leaf, remove, return
    if (walker->left == NULL && walker->right == NULL)
    {
        cout << "CAKE!";
        if (parent->left == walker)
        {
            parent->left = NULL;
        }
        else
        {
            parent->right = NULL;
        }
        delete walker;
        return;
    }
    // value is single child, parent's parent points to child
    if ((walker->left != NULL && walker->right == NULL) || (walker->left == NULL && walker->right != NULL))
    {
        if (walker->left == NULL && walker->right != NULL) //right child
        {
            if (parent->left == walker)
            {
                parent->left = walker->right;
                delete walker;
                walker = NULL;
                return;
            }
            else
            {
                parent->right = walker->right;
                delete walker;
                walker = NULL;
                return;
            }
        }
        else //left child
        {
            if (parent->left == walker)
            {
                parent->left = walker->left;
                delete walker;
                walker = NULL;
                return;
            }            
            else
            {
                parent->right = walker->left;
                delete walker;
                walker = NULL;
                return;
            }
        }   
        
    }
    if (walker->left != NULL && walker->right != NULL) // two children
    {
        Node<T>* above = walker->right;
        if (walker->left == NULL && walker->right == NULL)
        {
            walker = above;
            delete above;
            walker->right = NULL;
            return;   
        }
        else
        {
            if (walker->right->left != NULL)
            {
                cout << "HERE";
                Node<T>* abover;
                Node<T>* abovest;
                abovest = walker->right;
                abover = walker->right->left;
                while (abover->left != NULL) // move right, then left
                {
                    abovest = abover;
                    abover = abover->left;
                }
                walker->data = abover->data;
                delete abover;
                abovest->left = NULL;
                return;
            }
            else //not null
            {
                Node<T>* evenmoreabove = walker->right;
                walker->data = evenmoreabove->data;
                walker->right = evenmoreabove->right;
                delete evenmoreabove;
                return;
            }
        }

        return;
    }
}
