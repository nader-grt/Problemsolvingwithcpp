#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
int ReadNumberPostive(string message)
{
  int Number =0 ;
  do
  {
   cout<<message<<endl ;
   cin>>Number ;
  } while (Number<0);
  
  return Number ;
}


void PrintWord()
{

cout<<"\n"  ;

string word = "" ;

   for (int i = 65; i <=90; i++)
   {
          for (int j = 65; j <=90; j++)
          {
                for (int k = 65; k <=90; k++)
                {
                       //  cout<<char(i)<<char(j) <<char(k) <<"\n" ;
                         word = word + char(i) ;
                             word = word + char(j) ;
                              word = word + char(k) ;
                   cout<<word <<endl ;
                   word = "" ;
                }
          } 
   }
   
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===             Print Word                                        ====\n"                              ;
   cout<<"======================================================================\n";


PrintWord()  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
