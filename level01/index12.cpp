#include <iostream>

using namespace std ;

//PROBLEM SWAP TWO NUMBERS 


int ReadNumberPositive(string message)
{
    int number = 0 ;
    do{
    cout <<message <<endl ;
    cin >>number ;
    }while(number <0) ;
    return number ;
}
void PrintTwoNumbersSwap(int &num1 ,int &num2)
{
   cout <<"The first number is num1 \t"<<num1 <<endl ;
    cout <<"The second  number is num2 \t"<<num2 <<endl;

}


void PrintTwoNumbersAfterSwap(int &num1 ,int &num2)
{
   int temp =0 ;
   temp= num1 ;
   num1= num2 ;
   num2 = temp ;

}


int main() {
  int num1 ,num2 ;

num1 =ReadNumberPositive("Enter first number  ") ;
num2 = ReadNumberPositive("Enter the second number ") ;
cout<<"Swap two numbers before swap \n" ;
 PrintTwoNumbersSwap(num1 ,num2);
cout<<"\n ######################################################## \n" ;
cout<<"\n Swap two numbers after swap \n" ;
PrintTwoNumbersAfterSwap(num1,num2 ) ;
PrintTwoNumbersSwap( num1 ,num2) ;
     cout<<"\n" ;
    return 0;
}
