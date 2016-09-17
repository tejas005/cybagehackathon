#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
        ifstream infile("sample.txt",ios::in);
        string current;
        int count=0;
        while(getline(infile, current))
        {
                for(int i=0;i<current.size();i++)
                        if(current[i]=='.' || current[i]=='?' || current[i]=='!')
                                count++;
        }
        cout<<"Total Sentences: "<<count<<"\n";

  return 0;
}
      

