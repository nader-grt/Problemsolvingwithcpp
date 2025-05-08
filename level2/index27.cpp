#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
  /**
   * 
   *      Number <To
   */
int ReadIntInRangeNumber(int From ,int To)
{
    int Number = 0 ;
    do
    {
      cout<<"Enter Number between "<<From <<" And "<<To  <<endl ;
      cin>>Number ; 
    } while ( Number < From  ||  Number > To);
    return Number ;
}

int ValidateNumberPositiveWithFactorial(string message)
{
   int Number = 0 ;
    do
    {
      cout<<message <<endl ;
      cin>>Number ; 
    } while ( Number < 0);
    return Number ;

}


void PrintFactorial(int number)
{
    int fac =1 ;

    
    for (int  i = 1; i <= number; i++)
    {
        fac = fac * i ;
       
    }
    
    cout<<"The factorial of number "<<number << " is "<<fac <<endl ;

}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                RangInNumber between From and To using c++     ====\n"     ;                     
   cout<<"======================================================================\n";



  int number = ValidateNumberPositiveWithFactorial("Enter a postivive number Plz !")  ;
PrintFactorial(number)  ;


     cout<<"\n \n \n \n" ;
    return 0;
}
