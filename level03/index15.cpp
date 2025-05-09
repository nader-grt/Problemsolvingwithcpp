#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

void ReadNumbers(int &A,int &B)
{
      cout <<" \n Enter Your number 1 : "<<endl ;
  cin>>A  ;
    cout <<" \n Enter Your number 2 : "<<endl ;
  cin>>B  ;

}

void SwapNumbers(int &A,int &B)
{
  int temp ;
  temp = A ;
  A = B ;
  B = temp ;


}

void  PrintSwapNumber(int A,int B)
{
     
    cout <<"Number A = " + to_string(A)  + " \n" ;

      cout <<"Number B = " + to_string(B)  + " \n" ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Swap  two numbers c++ languages                  ====\n"                              ;
   cout<<"======================================================================\n";

  int A,B  ;

  ReadNumbers(A,B )  ;
  PrintSwapNumber(A,B)  ;

  SwapNumbers(A,B)  ;
  cout<<" \n \n \n\n===================================  \n";
    PrintSwapNumber(A,B)  ;

     cout<<"\n \n \n " ;
    return 0;
}
