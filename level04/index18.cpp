#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

string ReadWord(string message)
{
  string word = ""  ;
  cout<<message<<endl ;
  getline(cin,word)  ;
  return word ;
}

int FoundWordTrial(string wordInput)
{
 
string word =""  ;
       for (int i = 65; i <=90; i++)
   {
          for (int j = 65; j <=90; j++)
          {
                for (int k = 65; k <=90; k++)
                {
                   int Count  ;
                       //  cout<<char(i)<<char(j) <<char(k) <<"\n" ;
                         word = word + char(i) ;
                             word = word + char(j) ;
                              word = word + char(k) ;
                   //cout<<word <<endl ;
                 
           //  Count++ ;
                   cout<<"\n Trial "<<" ["<<Count++ + 1   <<"] "<<word <<endl ;

                   cout<<"\n " ;
                     if(word == wordInput)
                   {
                      
                      return Count; 

                   }

                   word = "" ;
                }
          } 
   }
 // return  Count ;
}

void PrintPasword(string word)
{
  int Count  =  FoundWordTrial(word)  ;
    cout<<" \n Password is "<<word <<endl ;
    cout<<" \n Found After " <<Count  <<" Trial (s) "<<endl ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";


PrintPasword(ReadWord("Enter word Guess? "))  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
