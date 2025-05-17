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


void  PrintNumberPattern(int Number)
{
     cout<<endl ; 
    for (int i = 1; i <=Number; i++)
    {
        for (int  j = 1; j <=i; j++)
        {
           cout<<i ;
        }
        cout<<endl ;
        
    }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                PROBLEM PATTERN NUMBER                         ====\n"                              ;
   cout<<"======================================================================\n";


           PrintNumberPattern(ReadNumberPostive("Enter a number? "))  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
