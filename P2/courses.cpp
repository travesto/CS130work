#include <iostream>
#include "p2priorityqueue.h"
#include <fstream>
using namespace std;

int main()
{
    int rank;
    ifstream fin;
    ofstream fout;
    PriorityQueue<string,int>PQ1;
    PriorityQueue<string,int>PQ2;
    PriorityQueue<string,int>PQ3;
    
    initialize(PQ1);
    initialize(PQ2);
    initialize(PQ3);
    
    string file, CS332, CS352, CS365, course, id; 
    cin >> file; //read in student data
    
    
    fin.open(file.c_str());  //if open read to string
    {
        while (fin >> course >> id >> rank)
        {
            if (course == "CS332")
            {
                push(PQ1, id, rank);
            }
            else if (course == "CS352")
            {
                push(PQ2, id, rank);
            }
            else  //course == "CS365"
            {
                push(PQ3, id, rank);
            }
        }
    }
    
    fin.close();
    
    fout.open("CS332");
    if (fout.is_open())
    {
        while (! isEmpty(PQ1))
        {
            fout << pop(PQ1) << endl;
        }
    }
    fout.close();
    fout.open("CS352");
    if (fout.is_open())
    {
        while (! isEmpty(PQ2))
        {
            fout << pop(PQ2) << endl;
        }
    }
    fout.close();
    fout.open("CS365");
    if (fout.is_open())
    {
        while (! isEmpty(PQ3))
        {
            fout << pop(PQ3) << endl;
        }
    }
    fout.close();
}