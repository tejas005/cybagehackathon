#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main ()
{   
    int count=0;
    char c[200];
    char getcontent[1000];
    ifstream openfile ("sample.txt");
    if(openfile.is_open())
    {
        while(! openfile.eof())
        {
            openfile >> getcontent;
            cout << getcontent<<" ";
        }
          cout<<"\nEnter a word to count:";
          cin>>c;
 for(i=0;i++)
{
  if(strcmp(getcontent,c)==0)
   {
   count++;
    }
 cout<<"Occurrence="<<count<<"\n";
   }
    return 0;
   }
