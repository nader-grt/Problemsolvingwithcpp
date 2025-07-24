#pragma once


#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
#include <filesystem>

using namespace std ;
namespace fs = std::filesystem;

namespace MyLibDate {

  bool IsLeapYear(short Year)
  {

    return  ( Year % 400 == 0  || ( Year % 4 == 0  && Year % 100 != 0))    ;
  }

short OrderDayByRuleWithGregorianCalendar(short Year,short Month,short Day)
{
    short a ,y ,m ,orderDay ;

         a = ((14 - Month) / (12) ) ;
         y = Year - a ;
         m = Month + (12 * a ) - 2 ;

         orderDay = (( Day + y + (y /4) - (y /100) + (y/400) + ((31 * m) /12))) % 7 ;
         return orderDay  ;

}





short GetNumberOfDaysInMonth(short Year,short Month)
{
          if(Month > 12 || Month <1) return 0 ;
                              // 1   2  3  4  5  6  7
    //  int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; 
     
    //  return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : days[Month - 1]; 


             int  NumberOfDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
          return (Month == 2 ) ? (IsLeapYear(Year) ? 29 :28) : ((NumberOfDays[Month -1]) );


}


}