#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void)
{

int ch; 
ifstream fin;
string filename;
char chaa;
int count=0;
char c;

cout << "Welcome\n" << endl;

cout << "Enter input data file name:" << endl;
cin >> filename;
cout << endl;


fin.open(filename.c_str()); 


if (!fin)         
{
cout << "Unable to open " << filename << endl;
cin.get();
}



cout << "Choose one of the following tasks: " << endl << endl;
cout << "1- Count the number of words" << endl;
cout << "2- Count the number of alphabets (without punctuation marks)." << endl;
cout << "3- Count the number of sentences" << endl;
cout << "4- Count the frequency of each vowel" << endl;
cout << "5- Repitation of the entered word in the file" <<endl;
cout << "6-To quit" << endl;

cout<<"enter your choice in integer\n";
cin >> ch;
cout << endl;



char next;
int alphabets = 0;
int words = 0;
int sentences = 0;
int vowel_a = 0;
int vowel_e = 0;
int vowel_i = 0;
int vowel_o = 0;
int vowel_u = 0;


switch(ch)
{

case 1:

while((next = fin.get()) != EOF)
{
if(isspace(next)) 
words++;
}
cout << "Total Number of Words: " << words << endl << endl;
break;


case 2:

while((next = fin.get()) != EOF)
{
if(isalpha(next)) 
alphabets++;
}
cout << "Total Number of Alphabets: " << alphabets << endl << endl;
break;



case 3:

while((next = fin.get()) != EOF)
{
if(next == '.' || next == '!' || next == '?') 
sentences++;
}
cout << "Total Number of Sentences: " << sentences << endl << endl;
break;


case 4:

while((next = fin.get()) != EOF)
{
if(next == 'a' || next == 'A') 
vowel_a++;

if(next == 'e' || next == 'E') 
vowel_e++;

if(next == 'i' || next == 'I') 
vowel_i++;

if(next == 'o' || next == 'O') 
vowel_o++;

if(next == 'u' || next == 'U') 
vowel_u++;
}
cout << "Total Number of vowel 'a': " << vowel_a << endl;
cout << "Total Number of vowel 'e': " << vowel_e << endl;
cout << "Total Number of vowel 'i': " << vowel_i << endl;
cout << "Total Number of vowel 'o': " << vowel_o << endl;
cout << "Total Number of vowel 'u': " << vowel_u << endl;
break;

case 5:
 cout<<"\n Enter the word to count:  ";
 cin>>c;
  
 while((next = fin.get()) != EOF)
 {
 if(next == c)
 {
 count++;
 }
 }
 cout<<"Occurrence="<<count<<"\n";
break;

case 6: exit(0);
break;
}

return 0;
}
