#include <iostream>
#include <cmath>
#include <string.h>
#include <limits>

using namespace std ;


string ReadTextBeforeEncryption(string message)
{
  string TextBeforeEncription = ""  ;
  cout<<message <<endl ;
  getline(cin,TextBeforeEncription)  ;
  return TextBeforeEncription ;
}

string TextDecription(string Text)
{
  int Key = 2 ;
  string TextDecription = ""  ;
  for (int  i = 0; i <= Text.length() - 1 ; i++)
  {
   TextDecription  +=  char(int(Text[i ]) + Key );
  }
  return TextDecription  ;
}


string TextEncription(string TextIsDecription)
{
  int Key = 2 ;
  string TextEncription = ""  ;
  for (int  i = 0; i <= TextIsDecription.length() - 1 ; i++)
  {
   TextEncription  +=  char(int(TextIsDecription[i ]) - Key );
  }
  return TextEncription  ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               Encription And Decription                       ====\n"                              ;
   cout<<"======================================================================\n";

string TextBeforeEncription  =ReadTextBeforeEncryption("Enter text? ")  ;
cout<<" \n  Text Before Encription "<<   TextBeforeEncription <<endl  ;
string  TextIsDecription  = "" ;
    TextIsDecription = TextDecription(TextBeforeEncription)   ;

string TextIsEncription = TextEncription(TextIsDecription)  ;

cout<<"\n Text Decription "<<TextIsDecription <<endl ;

cout<<"\n Text Encription "<<TextIsEncription <<endl ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
