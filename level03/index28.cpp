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

void PrintRangeNumberFromNto1_UsingFor(int Number ) ;
void PrintRangeNumberFromNto1_UsingWhile(int Number ) ;

void PrintRangeNumberFromNto1_UsingDoWhile(int Number ) ;


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
int Number = ReadNumber()  ;

 PrintRangeNumberFromNto1_UsingFor( Number ) ;
  cout<<"\n \n \n \n" ;
 PrintRangeNumberFromNto1_UsingWhile( Number ) ;
 cout<<"\n \n \n \n" ;
 PrintRangeNumberFromNto1_UsingDoWhile( Number ) ;
     cout<<"\n \n \n \n" ;
    return 0;
}










void PrintRangeNumberFromNto1_UsingFor(int Number ) {

  cout<<"`\n  Range Printed using For Statment Reversed: "<<endl ;
    for (int  i = Number ; i >= 1; i--)
    {
     cout<<i <<endl ;
    }
    

}



void PrintRangeNumberFromNto1_UsingWhile(int Number ) 
{
        cout<<"`\n  Range Printed using While Statment Reversed: "<<endl ;
        int Count = Number + 1 ;
        while (Count > 1)
        {
          Count-- ;
          cout<<Count<<endl ;
        }
        

}

void PrintRangeNumberFromNto1_UsingDoWhile(int Number ) 
{
     cout<<"`n  Range Printed using Do While Statment Reversed: "<<endl ;
     int Count = Number +1 ;
     do
     {
      Count-- ;
      cout<<Count <<endl ;
     } while (Count > 1 );
     
}