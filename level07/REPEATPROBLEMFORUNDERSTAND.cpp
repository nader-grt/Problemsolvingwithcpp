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

  


bool IsLeapYear(short Year){

      return  (Year % 400 == 0  || ( Year % 4 == 0 && Year % 100 != 0))  ;
}


short GetNumberOfDaysInMonth(short Year , short Month)
 {
       short  NumberDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
            if(Month > 12 || Month <1) return 0 ;
           return (Month == 2 ) ? (IsLeapYear(Year) ? 29 :28) : (Month == 12 ? (NumberDays[Month -1]) :NumberDays[Month]);
           
 }


string GetShortNameMonth(short Month)
 {
    

     string shortNameMonth[] = {
        "",    
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (Month >= 1 && Month <= 12)
       {
         return shortNameMonth[Month];
       }
    else
        return "Invalid";
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



void HeaderCalendar(short Month)
{
    cout<<"\n-------------------------------- ";cout <<GetShortNameMonth(Month)<<" ---------------------------------------------------------------------------\n" ;
}

void FooterCalandar()
{

    printf("\n------------------------------------------------------------------------------------------------------------------\n\n\n") ;
}



void PrintCalandarInMonth(short Year,short Month)
{

        HeaderCalendar(Month) ;

          short NumbersDays =  GetNumberOfDaysInMonth(Year,Month) ;
          short current     =  OrderDayByRuleWithGregorianCalendar(Year,Month,1) ;
           
            printf("\n   Sun  Mon  Tue  Wen  Thu  Fri  Sat \n") ;
             int  i ;
           for ( i = 0; i < current; i++)
            printf("     ") ;

            for (short  j = 1; j < NumbersDays; j++)
            {
               printf("%5d",j) ;

               if(++i == 7)
               {
                i =0 ;
                printf("\n") ;
               }
            }
            

        FooterCalandar()  ;
           
}



void PintCalandarInYear(short Year)
{
      for (short i = 1; i <= 12; i++)
      {
       PrintCalandarInMonth(Year,i)   ;
      }
      
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

    short Year =0  ,Month = 0 ;
      
                  Year  =  MyLib::ReadNumber("\n Enter a year ? ") ;
                //  Month =   MyLib::ReadNumber("\n Enter a Month ? ")  ;


              //    PrintCalandarInMonth(Year,Month)  ;

              PintCalandarInYear(Year)  ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
