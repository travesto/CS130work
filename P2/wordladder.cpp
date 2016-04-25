#include <iostream>
#include <fstream>
#include <sstream>
#include "p2map2.h"
#include "p2queue.h"
#include "p2stack1.h"
#include "p2graph.h"
using namespace std;

int length(filename)
{
    string S = filename;
    while (S != 0)
    {
        count++;
    }
    return count;
}
void copyStack(Stack &a, Stack b&)
{
    
}

void buildGraph(Graph<string> &words, string filename)
{
    Queue<Stack<string>> paths;
    Queue<string> temp;
    initialize(paths);
    Map<string, Queue<string>> families;
    initialize(families);
    ifstream fin;
    string temp;
    fin.open(filename.c_str());
    if (fin.is_open())
    {
       
        while (fin >> temp)
        {
            addVertex(words, fin);
            temp = fin;
            int count = 0;
            temp = length(temp);
            for (int i = 0; i < count; i++)
            {
                temp[i] = "_"; 
                if
            }
        }
        while (!isEmpty(paths))
        {
            string T = pop(paths);
            addEdge(words,T, dest?)
            push(temp, T);
        }   
    }
   
}

int main()
{
    Graph<string> words;
    string filename;
    cin >> filename;
    
    initialize(words, false);
    buildGraph(words,filename);
    
    
}