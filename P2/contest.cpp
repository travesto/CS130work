#include <iostream>
#include <iomanip>
#include <fstream>
#include "p2queue.h"
#include "p2map.h"
#include "p2priorityqueue.h"
using namespace std;

int main()
{
    string nameContestant, votes, file;
    Queue<string>contestants;
    Map<string,int>scores;
    Map<int,int>numvotes;
    PriorityQueue<string,int>ranking;
    int numContestant, phone, total = 0;
    float percent;
    
    ifstream fin;
    cout << "Enter filename containing list of contestants: ";
    cin >> file;
    
    initialize(contestants);
    initialize(scores);
    initialize(numvotes);
    initialize(ranking);
    
    fin.open(file.c_str());  //if open read to string
    {
        fin >> numContestant; //int
        for (int i = 0; i < numContestant; i++)
        {
            fin >> nameContestant;
            push(contestants, nameContestant);
            assign(scores,nameContestant,0);
        }
    }
    fin.close();
    
    cout << "Enter filename containing list of votes: ";
    cin >> file;
    
    fin.open(file.c_str());
    {
        while (fin >> votes >> phone)
        {
            if (! has_key(numvotes,phone))
            {
                assign(numvotes, phone, 0);
            }
            if ((lookup(numvotes, phone)) < 4)
            {
                assign(numvotes, phone, lookup(numvotes, phone)+1);
                assign(scores,nameContestant,lookup(scores,nameContestant)+1);
                
                total++;
            }
        }
    }
    fin.close();
    
    while(!isEmpty(contestants))
    {
        string names = pop(contestants);
        push(ranking, nameContestant, lookup(scores, nameContestant));
    }
    
    cout << "Final rankings";
    
    while (!isEmpty(ranking))
    {
        string name = pop(ranking);
        percent = lookup(scores, ranking) / total;
        cout << fixed << setprecision(1) << 100.0 * percent << "% " << ranking;
    }
    destroy(contestants);
    destroy(scores);
    destroy(numvotes);
    destroy(ranking);
}