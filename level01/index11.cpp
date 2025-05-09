
#include <iostream>

using namespace std ;

// PROBLEM MAW BETWEEN TWO NUMBERS 


int main() {

int num1 =0 , num2 =0  ,max;
cout<<"Enter the number one  \n" ;
cin >>num1 ;
cout<<"Enter the number two  \n" ;
cin >>num2 ;
if(num1 < num2){
    max = num2 ;
}else
max = num1 ;

cout<<"the max between two numbers "<<num1 <<" and "<< num2 << "  is "<<max <<endl ;
    return 0;
}
