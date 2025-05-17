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
int PrintCountFrequency(int Number, int Digit)
{
    int Count  = 0  ,Remainder  ;

     do
     {
          Remainder =  Number % 10 ;
          if(Remainder == Digit)
          {
             Count++ ;
          }
          Number /= 10 ;
     } while (Number >0 );
     
    return Count ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
int Number = ReadNumberPostive("Enter the Number? ") ;
int Digit = ReadNumberPostive("Enter a digit? ")  ;

//1223222

cout<<"Digit "<<Digit <<" Frequency "<<PrintCountFrequency(Number ,Digit) << " Time (s)" <<endl ;
  cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n" ;
     cout<<"\n" ;
    return 0;
}
