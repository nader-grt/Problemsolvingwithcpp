#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>
#include <filesystem>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;


/**
 * 
 * 
 * 
 * 
int daysInMonth[12] = {
    31, // January
    28, // February
    31, // March
    30, // April
    31, // May
    30, // June
    31, // July
    31, // August
    30, // September
    31, // October
    30, // November
    31  // December
};


 


 */

short CheckMonthInIntervelFrom_1_To_12()
{
        short month;
      do{

      cout<<"\n please enter a month to check? [1 to 12]  ";
      cin>>month;

      }while(month >12 || month <1);

          return month;
}




bool IsLeapYear(short year)
{
    return   ((year % 400 == 0) || (year % 4 == 0 &&  year % 100  != 0))   ;
}



short NumberOfDaysInYear(short Number)
{
  return   IsLeapYear(Number) ? 366 : 365 ; 
}
short NumberOfDayInMonth(short Number ,short month )
{

         

         if(month >12 || month <1)
         {
              return 0 ;
         }
           short numbersOfDays[12]  = {31,   28,  31,  30,  31,   30,   31,  31,  30,  31,  30,  31  } ;
           //  int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
     
 

     return ( month == 2) ? ( (NumberOfDaysInYear(Number) == 366)   ? 29 :28 ) :  numbersOfDays[month - 1]   ;
}

short NumberOfHoursInMonth(short Number,short month )
{

      return   NumberOfDayInMonth(Number, month ) * 24 ;
}

int NumberOfMinuteInMonth(short Number ,short month )
{

    return      NumberOfHoursInMonth(Number, month ) * 60   ;

}

int  NumberOfSecondsInMonth(short Number,short month )
{

  return  NumberOfMinuteInMonth(Number, month ) * 60;
  
}


void  PrintNumberOfDaysHoursMinuteSecondInMoth()
{
           short  year = MyLib::ReadNumber("\n Enter  a year to check ? ")  ;

            short Month  = MyLib::ReadNumber("\n Enter  a Month two please to check ? ")  ;

             
               printf("\n Numbers Of  Days  in Month  [%d]  is  %d ",Month,NumberOfDayInMonth(year,Month) ) ;

               printf("\n Numbers Of  Hours in Month  [%d]  is  %d ",Month,NumberOfHoursInMonth(Month,Month) ) ;
               printf("\n Numbers Of  Hours in Month  [%d]  is  %d ",Month,NumberOfMinuteInMonth(Month,Month) ) ;
               printf("\n Numbers Of  Hours in Month  [%d]  is  %d ",Month,NumberOfSecondsInMonth(Month,Month) ) ;

}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


      PrintNumberOfDaysHoursMinuteSecondInMoth()  ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
