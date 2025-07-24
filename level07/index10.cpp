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

bool  IsLeapYear(short Year)
{
       return  (Year % 400 == 0  || (Year % 4 == 0 && Year % 100 != 0)) ? 29 : 28  ;
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
          
            int  NumberOfDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
          return (Month == 2 ) ? (IsLeapYear(Year) ? 29 :28) : (Month == 12 ? (NumberOfDays[Month -1]) :NumberOfDays[Month]);
}


string ConvertMonthOrderToShortName(short Month)
{
    string monthNames[] = {
        "",    
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (Month >= 1 && Month <= 12)
       {
         return monthNames[Month];
       }
    else
        return "Invalid";
}

void headerCalendarWithMonth(string nameMonth)
{
      cout<<"\n\n ----------"<<nameMonth<<"--------------------------------------------------------------------------------\n\n" ;
     

}

void PrintMonthCalandar(short Year,short Month)
{

         headerCalendarWithMonth(ConvertMonthOrderToShortName(Month))  ;

         short current = OrderDayByRuleWithGregorianCalendar(Year,Month,1)  ;
         short numbersDayInMonth = GetNumberOfDaysInMonth(Year, Month)  ;


            printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            short i  ;

          
         for ( i = 0; i < current; i++)
         {
          
          printf("     ") ;
         }
         
         for (short j = 1; j < numbersDayInMonth; j++)
         {
          printf("%5d",j) ;
            if(++i == 7)
            {

              i = 0 ;
              printf("\n") ;
            }

         }
         

         cout<<"\n\n -----------------------------------------------------------------------------------------------------\n" ;

}


void  PrintYearCalandar(short Year)
{

            printf("\n  _________________________________\n\n");   
            printf("           Calendar - %d\n", Year);  
             printf("  _________________________________\n");
           short i  ;
     for (i = 1; i <= 12; i++)
     {
         PrintMonthCalandar(Year,i) ;

         

       //  cout<<"\n----------------------------------------------------------------- \n" ;
     }

     
    return ;

}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


       short Year = 0 , Month = 0 ;
       Year = MyLib::ReadNumber("\n Enter  a year please? ")  ;
     //  Month  = MyLib::ReadNumber("\n Enter your Month please ? ")  ;
      

                       //     PrintCalandar(Year, Month)             ;

                    PrintYearCalandar(Year)          ;












   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
