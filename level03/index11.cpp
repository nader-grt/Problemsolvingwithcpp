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

float CalculateAverage(int num1 ,int num2 ,int num3)
{
     return (float)  (CalculateSumOf3Numbers(num1 ,num2 ,num3) /3)
}
void PrintResultAverageThreeNumbers(int Average)
{
    cout<<" \n Your Average is "<<Average <<endl ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               Average of Three numbers                        ====\n"                              ;
   cout<<"======================================================================\n";

int  num1 ,num2 ,num3 ;
ReadNumbers(num1 ,num2 ,num3 ) ;


PrintResultAverageThreeNumbers(CalculateAverage( num1 ,num2 ,num3 ))  ;
     cout<<"\n" ;
    return 0;
}
