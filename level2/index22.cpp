#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
enum enOperType  {   Add = 43,
    Sub = 45,
    Mul = 42,
    Div = 47}  ;
/**
 * 
 * ASCII code for '+' is: 43
ASCII code for '-' is: 45
ASCII code for '*' is: 42
ASCII code for '/' is: 47

 */


void simple_Calculation(short OperCharType ,short num1 ,short num2)
{
   switch (OperCharType)
   {
   case enOperType::Add  :
       cout<<num1 << " + "<<num2 <<"  = "<<num1 + num2 <<endl ;
    break;
      case enOperType::Sub  :
     cout<<num1 << " - "<<num2 <<"  = "<<num1 - num2 <<endl ;
    break;
      case enOperType::Mul  :
    cout<<num1 << " * "<<num2 <<"  = "<<num1 * num2 <<endl ;
    break;
      case enOperType::Div  :
      cout<<num1 << " / "<<num2 <<"  = "<<num1 / num2 <<endl ;
    break;
   
   default:
    break;
   }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===          Problem simple calculation       c++ languages       ====\n"                              ;
   cout<<"======================================================================\n";

 cout << "****************************\n";
   
   
    cout << "****************************\n\n";
 
     cout<<"\n" ;
     short num1 ,num2 ;
      char  op ;
      enOperType  OperCharType ;

     cout<<"Enter  the first number \n";
     cin>>num1;
      cout << "Please Enter the number of your operation type?\n";
    cout << "(+) Add\n";
    cout << "(-) Sub\n";
    cout << "(*) Mul\n";
    cout << "(/) Div\n";
   cout << "Your operation type? ";
    
cin>> op ;

  cout<<"Enter  the second number \n";
     cin>>num2;





OperCharType  = (enOperType)  int(op)  ;
simple_Calculation(OperCharType ,num1,num2)  ;
cout<<"\n \n \n"  ;
    return 0;
}
