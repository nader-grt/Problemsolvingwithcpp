#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     


#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;



void PrintNumberUsingRecursion(int N,  int M)
{

    if(N <= M)
    {
        cout<<N<<endl ;
        PrintNumberUsingRecursion(N + 1,M)  ;
    }
}


void PrintNumberUsingRecursionFromNto1(int N,  int M)
{
   //   int CountDown = N + 1 ;

    if( N >=M)
    {
        cout<<N<<endl ;
        PrintNumberUsingRecursionFromNto1(N - 1,M)  ;
    }
}


int  PowerNumber(int Number ,int Power)
{
       if(Power == 0) return 1 ;
      //     int result = 1 ;
       if(Power >= 0)
       {
          
        
        return Number *  PowerNumber(Number,Power -1 )  ;
       }
      

     //  return result ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 







// PrintNumberUsingRecursion(1,4)  ;

// cout<<"\n \n ==================================================== \n \n" ;


// PrintNumberUsingRecursionFromNto1(10,1)  ;


int Power = MyLib::ReadNumber("\n Enter the power please ? ") ;


int Number = MyLib::ReadNumber("\n Enter the number make it power please ? ") ;



cout<< PowerNumber(Number , Power)  ;



   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
