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

bool IsLeapYear(short Number)
{

     return ( ( Number % 400 == 0) ||  (Number % 4 == 0 && Number % 100 != 0 ))  ;
}

short PrintNumberOfDaysLeapYearOrNOTLeapYear(short Number)
{

    return   IsLeapYear(Number) ==  true ? 366 :365 ;
}

short PrintNumberOfHours(short Number)
{

   return     PrintNumberOfDaysLeapYearOrNOTLeapYear(Number) *24   ;
}

int  PrintNumberOfMinutes(short Number)
{

  return PrintNumberOfHours(Number)  * 60 ;
}
int  PrintNumberOfSeconds(short Number)
{

  return PrintNumberOfMinutes(Number)  * 60     ; 
}

void ConvertYearToDaysAndHoursAndMinutesAndSecond()
{
         short   Number , year  = MyLib::ReadNumber("\n Enter a year to check ? ") ;

               Number = PrintNumberOfDaysLeapYearOrNOTLeapYear(year)  ;

               printf("\n Numbers Of  Days  in year  [%d]  is  %d ",year,PrintNumberOfDaysLeapYearOrNOTLeapYear(year) ) ;

               printf("\n Numbers Of  Hours in year  [%d]  is  %d ",year,PrintNumberOfHours(Number) ) ;
               printf("\n Numbers Of  Hours in year  [%d]  is  %d ",year,PrintNumberOfMinutes(Number) ) ;
               printf("\n Numbers Of  Hours in year  [%d]  is  %d ",year,PrintNumberOfSeconds(Number) ) ;
                  

}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


                  ConvertYearToDaysAndHoursAndMinutesAndSecond()                           ; 
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
