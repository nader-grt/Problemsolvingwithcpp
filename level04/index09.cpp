#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
int ReadNumberPositive(string message)
{
    int Number =0 ;
    do
    {
      cout<<message<<endl ;
      cin>>Number ;
    } while (Number <0);
    
    return Number  ;
}

int FrequencyDigitCount(int Number ,int Digit)
{
    int Count =0 ,Remainder =0;

    do
    {
       Remainder = Number % 10  ;
       if(Remainder == Digit) Count++ ;
       Number /= 10 ;
    } while (Number > 0);
    
    return Count ;
}

void PrintDigitNumberFrequency(int Number)
{
    for (int i = 1; i <= 9; i++)
    {
        if(FrequencyDigitCount(Number,i) > 0)
        cout<<i<<"  Frequency "<<FrequencyDigitCount(Number,i) <<" Time (s)" <<endl ;
    }
    
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Digit Frequency                                  ====\n";
   cout<<"======================================================================\n";

PrintDigitNumberFrequency(ReadNumberPositive("Enter Number? "))  ;

  cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n" ;
     cout<<"\n" ;


     cout<<"\n" ;
    return 0;
}
