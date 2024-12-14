
#include<iostream>
#include<string>
using namespace std;

int main(){

// Q1 :: Small To Capetal
char ch2 = 'a' - 32;
cout<<ch2<<endl;

// Q2 :: Capetal To Small 
char ch4 = 'A' + 32;
cout<<ch4<<endl;

// Q3 :: Delete the symbol from the text string  : "A/bd.ULLa=h"

// name.length () ==> returns the number of elements array
// Eximple : INPUT => "A/bd.ULLa=h" || OUTPUT ==>A bd Ulla h

string name = "A/bd.ULLa=h";


for (int i = 0; i < name.length () ; i++)
{
    if ((name[i] < 'A' || name[i] > 'Z'  ) && ( name[i] < 'a' || name[i] > 'z' ) )
    {
       
      name[i] = ' '; 
    }
    
}

cout<<name;

}