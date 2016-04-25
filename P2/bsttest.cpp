#include <iostream>
#include <iomanip>
#include <cassert>
#include "p2bst4.h"
using namespace std;

int main()
{
	cout << "* This program tests an implementation of a Binary Search Tree *\n\n";
	
	// int A =  36, B = 44, C = 61, D = 71, E = 77, F = 78, G = 80, H = 81, I = 88, J = 93, K = 109;
    // Tree<int> T;
    // initialize(T);
    // insert(T,D);
    // insert(T,I);
    // insert(T,B);
    // insert(T,A);
    // insert(T,C);
    // insert(T,K);
    // insert(T,H);
    // insert(T,E);
    // insert(T,J);
    // insert(T,F);
    // insert(T,G);
	// remove(T,G);
    // cout << endl << "-G: " << countNodes(T);
	// remove(T,K);
	//     cout << endl << "-K: " << countNodes(T);

    // remove(T,B);
	//     cout << endl << "-B: " << countNodes(T);
	// remove(T,K);
	//     cout << endl << "-K: " << countNodes(T);

    // remove(T,D);
	//     cout << endl << "-D: " << countNodes(T);
	// //cout << endl << T.root->data << endl << T.root->left->data << endl << T.root->right->data;
	// assert(countNodes(T) == 7);
	
	// int A =  5, B = 12, C = 17, D = 20, E = 32, F = 35, G = 36, H = 38, I = 39,
    //     J = 40, K = 41, L = 50, M = 80, N = 85, O = 90;
    // int X = 34;
    // Tree<int> T;
    // initialize(T);
    // insert(T,J);
    // insert(T,O);
    // insert(T,K);
    // insert(T,E);
    // insert(T,F);
    // insert(T,M);
    // insert(T,A);
    // insert(T,B);
    // insert(T,H);
    // insert(T,L);
    // insert(T,I);
    // insert(T,D);
    // insert(T,G);
    // insert(T,N);
    // insert(T,C);
    // remove(T,X);
    // cout << endl << countNodes(T);
	// remove(T,H);
	// cout << endl << "-H: " << countNodes(T);
    // remove(T,B);
	// cout << endl << "-B: " << countNodes(T);
    // remove(T,J);
	// cout << endl << "-J: " << countNodes(T);
    
	//  assert(countNodes(T) == 12);
	
	// char D = 'D', L = 'L', R = 'R', W = 'W', Y = 'Y';
    // Tree<char> T;
    // initialize(T);
    // insert(T,L);
    // insert(T,D);
    // insert(T,W);
    // insert(T,Y);
    // insert(T,R);
    // Node<char>* ptrD = T.root->left;
    // Node<char>* ptrW = T.root->right;
    // Node<char>* ptrR = T.root->right->left;
    // remove(T,L);
    // assert(T.root->right->left == NULL);
	// cout << T.root->data << endl << T.root->left->data << endl << T.root->right->data << endl;
	
	// char D = 'D', L = 'L', R = 'R', W = 'W', Y = 'Y';
    // Tree<char> T;
    // initialize(T);
    // insert(T,R);
    // insert(T,D);
    // insert(T,W);
    // insert(T,L);
    // insert(T,Y);
    // Node<char>* ptrD = T.root->left;
    // Node<char>* ptrW = T.root->right;
    // Node<char>* ptrY = T.root->right->right;
    // remove(T,R);
    // cout << endl << T.root->right->data;
	// assert(T.root->right->data == Y);
	
	char D = 'D', L = 'L', R = 'R', W = 'W', Y = 'Y';
    Tree<char> T;
    initialize(T);
    insert(T,L);
    insert(T,D);
    insert(T,W);
    insert(T,Y);
    insert(T,R);
    Node<char>* ptrD = T.root->left;
    Node<char>* ptrW = T.root->right;
    Node<char>* ptrR = T.root->right->left;
    remove(T,L);
	cout << T.root->right->data; 
    assert(T.root->right->data == W);
	
	// Tree<int> tree;
	// initialize(tree);
	
	// string command;
	// int value;
	// while(true)
	// {
	// 	cin >> command;
		
	// 	if( command == "Quit" )
	// 		break; // quit loop/program
		
	// 	if( command == "Insert" ) 
	// 	{
	// 		cin >> value;
	// 		insert(tree, value);
	// 	}
		
	// 	else if( command == "Contains" )
	// 	{
	// 		cin >> value;
	// 		int d = contains(tree, value);
	// 		if( d >= 0 )
	// 			cout << ">> Depth: " << d << "\n";
	// 		else
	// 			cout << ">> Value not found\n";
	// 	}
		
	// 	else if( command == "Count" )
	// 	{
	// 		cout << ">> " << countNodes(tree) << endl;
	// 	}
		
	// 	else if( command == "Height" )
	// 	{
	// 		if( countNodes(tree) == 0 )
	// 			cout << ">> Tree empty" << endl;
	// 		else				
	// 			cout << ">> " << height(tree) << endl;
	// 	}
		
	// 	else if( command == "Lowest" )
	// 	{
	// 		if( countNodes(tree) == 0 )
	// 			cout << ">> Tree empty\n";
	// 		else
	// 			cout << ">> " << minValue(tree) << endl;
	// 	}
		
	// 	else if( command == "Highest" )
	// 	{
	// 		if( countNodes(tree) == 0 )
	// 			cout << ">> Tree empty\n";
	// 		else
	// 			cout << ">> " << maxValue(tree) << endl;
	// 	}
		
	// 	else if( command == "Leaf" )
	// 	{
	// 		cout << "-- " << countLeaf(tree) << " leaf node(s)" << endl;
	// 	}
		
	// 	else if( command == "Single" )
	// 	{
	// 		cout << "-- " << countSingle(tree) << " single child node(s)" << endl;
	// 	}	
		
	// 	else if( command == "Double" )
	// 	{
	// 		cout << "-- " << countDouble(tree) << " double child node(s)" << endl;
	// 	}	

	// 	else if( command == "Kth" )
	// 	{
	// 		cin >> value;
	// 		if( value < 1 || value > countNodes(tree) )
	// 			cout << "-- Invalid request" << endl;
	// 		else
	// 			cout << "-- " << kthValue(tree,value) << endl;
	// 	}
	// 	else if( command == "Remove" ) 
	// 	{
	// 		cin >> value;
	// 		remove(tree, value);
	// 	}
	// 	else if ( command == "Destroy" )
	// 	{
	// 		destroy(tree);
	// 		cout << tree.root;
	// 		assert(tree.root == NULL);
	// 	}	
	// }		
	// destroy(tree);
}