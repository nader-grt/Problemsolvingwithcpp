#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

int ReadNumber()
{
  int Number ;
      do
      {
        cout<<"\n Enter your number? "<<endl ;
        cin>>Number ;
      } while (Number <0);
      
  return Number ;
}

void PrintRangeNumberFrom1toN_UsingFor(int Number ) ;
void PrintRangeNumberFrom1toN_UsingWhile(int Number ) ;

void PrintRangeNumberFrom1toN_UsingDoWhile(int Number ) ;


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
int Number = ReadNumber()  ;

 PrintRangeNumberFrom1toN_UsingFor( Number ) ;
 PrintRangeNumberFrom1toN_UsingWhile( Number ) ;

 PrintRangeNumberFrom1toN_UsingDoWhile( Number ) ;
     cout<<"\n" ;
    return 0;
}










void PrintRangeNumberFrom1toN_UsingFor(int Number ) {

  cout<<"`n  Range Printed using For Statment"<<endl ;
    for (int  i = 1; i <= Number; i++)
    {
     cout<<i <<endl ;
    }
    

}



void PrintRangeNumberFrom1toN_UsingWhile(int Number ) 
{
        cout<<"`n  Range Printed using While Statment"<<endl ;
        int Count = 0 ;
        while (Count< Number)
        {
          Count++ ;
          cout<<Count<<endl ;
        }
        

}

void PrintRangeNumberFrom1toN_UsingDoWhile(int Number ) 
{
     cout<<"`n  Range Printed using Do While Statment"<<endl ;
     int Count = 0 ;
     do
     {
      Count++ ;
      cout<<Count <<endl ;
     } while (Count <Number);
     
}