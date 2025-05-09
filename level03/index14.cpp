#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


void   ReadNumbers(int &A ,int &B ,int &C)
{
  
  cout <<" \n Enter Your number 1 : "<<endl ;
  cin>>A  ;
    cout <<" \n Enter Your number 2 : "<<endl ;
  cin>>B  ;

   cout <<" \n Enter Your number 2 : "<<endl ;
  cin>>C ;
}

int  Maxof3Numbers(int A ,int B ,int C)
{

  if(A >=B)
  {
      if(A >= C)
      return A ;
      else
      return C;
  } 
  else
  { if(B >= C)
      return B  ;
    else
     return C  ;

  }
}

void PrintResult(int Max)
{
  cout<<"\n Your Max is "<<Max <<endl ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Max of three number  using c++                   ====\n"                              ;
   cout<<"======================================================================\n";
    int   A , B ,C  ;

    ReadNumbers(A ,B ,C) ;
    PrintResult(Maxof3Numbers(A ,B ,C))  ;


     cout<<"\n" ;
    return 0;
}
