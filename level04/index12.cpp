#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

int ReadNumberPositive(string message)
{
    int Number =0 ;
     do
     {
          cout<<message <<endl ;
          cin>>Number ;
     } while (Number <0);
     
    return Number ;
}


void PrintReversedNumberPattern(int Number)
{
       cout<<"\n" ;
    for (int i = Number; i >=1; i--)
    {

        for (int j = 1; j <=i; j++)
        {
           cout<<i ;
        }
        
      cout<<endl  ;
    }
   
    
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Problem ReversedNumber Pattern             ====\n"                              ;
   cout<<"======================================================================\n";


PrintReversedNumberPattern(ReadNumberPositive("Enter a number? "))  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
