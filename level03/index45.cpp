#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
/**
 * 
 * input 1938988 TotalSeconds
output
22:10:36:28
 */

struct StTaskDuration {
int NumbersOfDays , NumbersOfHours , NumbersOfMinutes,NumbersOfSeconds ;
}  ;

int ReadPositiveNumber(string message)
{
    int Number = 0  ;
    do
    {
       cout<<message<<endl ;
       cin>>Number ;
    } while (Number <0);
    
    return Number ;
}

 StTaskDuration TaskDuration(int TotalSeconds)
 {
        StTaskDuration TaskDuration   ;
        int Remainder ;

        const int  NumbersOfDays = 24 * 60 *60 ;
        const int  NumbersOfHours  = 60 * 60 ;
        const int  NumbersOfMinutes = 60 ;
        TaskDuration.NumbersOfDays  = floor(TotalSeconds / NumbersOfDays)  ;
        Remainder =  TotalSeconds % NumbersOfDays  ;
        TaskDuration.NumbersOfHours = floor(Remainder / NumbersOfHours) ;
        Remainder  =   Remainder % NumbersOfHours ;
        TaskDuration.NumbersOfMinutes  = floor(Remainder / NumbersOfMinutes) ;
       Remainder = Remainder % NumbersOfMinutes  ;
       TaskDuration.NumbersOfSeconds =  Remainder  ;
       return TaskDuration  ;

 }

void PrintTaskDurationDetails(StTaskDuration TaskDuration)
{
   cout<<endl ;
   cout<<TaskDuration.NumbersOfDays <<":"<<TaskDuration.NumbersOfHours<<":"<<TaskDuration.NumbersOfMinutes<<":"<<TaskDuration.NumbersOfSeconds <<endl ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

int  TotalSeconds = ReadPositiveNumber("\n PLZ Enter the Total Seconds? ") ;
  PrintTaskDurationDetails(TaskDuration(TotalSeconds)) ;


     cout<<"\n \n \n \n " ;
    return 0;
}
