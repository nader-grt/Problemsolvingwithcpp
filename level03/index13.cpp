#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


void   ReadNumbers(int &num1 ,int &num2)
{
  
  cout <<" \n Enter Your number 1 : "<<endl ;
  cin>>num1  ;
    cout <<" \n Enter Your number 2 : "<<endl ;
  cin>>num2  ;
}

int  Maxof2Numbers(int num1 ,int num2)
{

  if(num1 >=num2)
  return num1  ;
  else
  return num2  ;
}

void PrintResult(int Max)
{
  cout<<"\n Your Max is "<<Max <<endl ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
    int   num1 , num2  ;

    ReadNumbers(num1 ,num2) ;
    PrintResult(Maxof2Numbers(num1 ,num2))  ;


     cout<<"\n" ;
    return 0;
}
