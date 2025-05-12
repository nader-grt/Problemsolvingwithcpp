#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


int  ReadPositiveNumber(string message)
{
    int Number = 0 ;
    do
    {
      cout<<message<<endl ;
      cin>>Number ;
    } while (Number <0);
    return Number ;
    
}

float HoursToDays(float NumbersOfHours)
{
    return (float)  (NumbersOfHours /24) ;
}

float DaysToWeeks(float NumbersOfDays)
{
    return (float)  (NumbersOfDays/7)  ;
}


float HoursToWeek(float NumbersOfHours)
{
    return (float) (NumbersOfHours /24/7)  ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Week and Days             ====\n"                              ;
   cout<<"======================================================================\n";
float  NumbersOfHours = ReadPositiveNumber("Enter Number of Hours? ")  ;
float  NumberOfDays  = HoursToDays(NumbersOfHours)  ;
float NumberOfWeeks  = DaysToWeeks(NumberOfDays)  ;

cout<<endl ;
cout <<"Numbers of Hours is "<<NumbersOfHours<<endl ;
cout <<"\n Numbers of Days is "<< NumberOfDays <<endl ;

cout<<"\n \n Number of Weeks is " <<HoursToWeek(NumbersOfHours)<<endl ;

     cout<<"\n \n \n \n \n" ;
    return 0 ;
}
