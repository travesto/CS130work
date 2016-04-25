#include <iostream>
#include <fstream>
using namespace std;


string sort(string s)
{
   int x = 0;
   while (s[x] != 0) 
   {
       for (int i = 1; i < x; i++)
       {
            if (s[i] > s[x])
            {
                s[x] = s[i];
                s[i] = s[i+1];
            }   
       }
        
       x++;
   }
   return s;  
}


int main()
{
        ifstream fin; //input fstream
        ofstream fout; //output fstream
        int x = 0, f[1000], l[1000], i[1000];
        string filename, output, first = "", last = "", id = "";
        cout << "Input file: ";
        cin >> filename;
        cout << "Output file: ";
        cin >> output;
        
        fin.open(filename.c_str()); // open file
        if (fin.is_open() )
        {
            while (fin >> first >> last >> id)
                fin >> id[x];//read file to string
                x++;
        }
        
        
        //sort(id);//sort id's        
       
        fin.close();
     /*
        fout.open(output.c_str());
        if (fout.is_open())
        {
             while (fout << id << first << last)
             fout << id << first << last; // run thru sort func
        }   
        
        //fout.close(); 
    */
       for (int i = 0; i <= 6; i++)
            cout << id[i];
    nbn cout << first;
}