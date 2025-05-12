#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

enum enOperationType {Add = '+',Subtract = '-' ,Multiply = '*' ,Divide ='/'}  ;
int ReadNumber(string message)
{
    int number = 0 ;
        do
        {
          cout<<message <<endl ;
          cin >>number ;
        } while (number <0);
        
    return number ;
}
enOperationType ReadOpType()
{
    char OP ;
    cout<<"\n Enter operation type like (+,-,*,And /) PLZ ?"<<endl ;
    cin>>OP ;
      return (enOperationType)  OP ;

}

int Calculate(int number1 ,int number2 ,enOperationType OperType)
{
    switch (OperType)
    {
    case  enOperationType::Add  :
         return number1 + number2  ;
        break;

         case  enOperationType::Subtract  :
        return number1 - number2  ;
        break;
         case  enOperationType::Multiply  :
         return number1 * number2  ;
        break;
         case  enOperationType::Divide  :
           return number1 / number2  ;
        break;
    
    default:
     return 1;
        break;
    }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

int number1 = ReadNumber("")  ;
int number2 = ReadNumber("")  ;
enOperationType  operType = ReadOpType()  ;
cout<<"the result is: "<<Calculate(number1 ,number2,operType)  ;
     cout<<"\n \n \n \n" ;
    return 0;
}
