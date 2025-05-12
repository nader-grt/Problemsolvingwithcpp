#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

float ReadPositiveNumber(string message)
{
    int Number =0 ;
     do
     {
       cout<<message<<endl ;
       cin>>Number ;
     //  getline(cin,Number) ;

            //  cin.ignore(1,'\n') ;
            //   getline(cin, Number  )  ;
     } while (Number < 0);
     
    return Number ;
}
int  SumNumbersUntil99()
{
    int Number =0 , Count = 0 ,sum = 0 ;

    do
    {
        Count++ ;
        Number = ReadPositiveNumber("\n PLZ enter the number " + to_string(Count))  ;
        if(Number  ==  99) break;
        
        sum += Number ;
    } while (Number !=  99);
    return sum ;
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

cout<<"\n "<<SumNumbersUntil99() ;


     cout<<"\n \n \n " ;
    return 0;
}
