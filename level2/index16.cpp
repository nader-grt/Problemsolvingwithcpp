#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

// 97  to 122   a to z  
string  ReadWord(string message)
{
    string word = ""  ;
    short count =0;
     cout<<message<<endl ;
      cin>>word ;
    do
    {
          bool result = int(word[count] ) >=97   &&  int(word[count] ) <=122 ;
          if(result)
          {
            count++ ;
          }
    } while (count != word.length());

    return word ;
    
}
void ReversedWord(string word)
{
  cout<<"Word is "<<word<<endl ;
  string reversedWord ="" ;
  for (int i = word.length() ;  i >= 0; i--)
  {
  
    reversedWord  += word[i]  ;
  }
  cout<<"the result of reversedWord  is "<<reversedWord<<endl ;
}
int main() {
   
     string testword ="" ;
 testword = ReadWord("enter please one word !")    ;
ReversedWord(testword)  ;

     cout<<"\n" ;
    return 0;
}
