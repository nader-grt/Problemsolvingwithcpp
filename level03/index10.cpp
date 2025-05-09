#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

void ReadNumbers(int &num1 ,int &num2 ,int &num3)
{
    cout<<"\n Enter your Number 1 :"<<endl ;
    cin>>num1 ;

     cout<<"\n Enter your Number 2 :"<<endl ;
    cin>>num2;
     cout<<"\n Enter your Number 3 :"<<endl ;
    cin>>num3 ;
}

float CalculateSumOf3Numbers(int num1 ,int num2 ,int num3)
{
    return    (num1 + num2 + num3)     ;
}


void PrintResultSumThreeNumbers(int TOtal)
{
    cout<<" \n Your total is "<<TOtal <<endl ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
int num1 , num2 , num3  ;
ReadNumbers(num1 , num2 , num3  ) ;
PrintResultSumThreeNumbers(CalculateSumOf3Numbers(num1,num2,num3)) ;
     cout<<"\n" ;
    return 0;
}
