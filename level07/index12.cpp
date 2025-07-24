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
#include "../../coursecpp/level05/LibraryOrPackage/MyLibDate.h" 

using namespace std ;


struct sDate
{
    short Year;
    short Month;
    short Day;

}; 


short ReadDay(string message)
{

     short Day  = 0 ;

     do
     {
      cout<<message <<endl ;
      cin>>Day ;
     } while (Day <0);

     return Day ;
     
}



short ReadMonth(string message)
{

     short Month   ;

     do
     {
      cout<<message <<endl ;
      cin>>Month ;
     } while ((Month > 12  ) || (Month < 1));

     return Month ;
     
}


short ReadYear(string message)
{

     short Year   ;

   
      cout<<message <<endl ;
      cin>>Year ;
   

     return Year ;
     
}



short ConvertDateToNumbersTotalDays(short Day,short Month,short Year)
{
  
                   short TotalDays = 0 ;
 
              for (short i = 1; i <= Month - 1 ; i++)
              {
                 TotalDays += MyLibDate::GetNumberOfDaysInMonth(Year,i) ; 
              }

            
              return (TotalDays + Day) ;
}

sDate ConvertNumbersDaysTotalToDate(short TotalDays,short Year)
{
    sDate Date   ;
       short RemainderInTotalDays = TotalDays ;
       short NumbersDayInMonth = 0 ;
       
       Date.Year  = Year ;
       Date.Month  = 1 ;


          while (true)
          {
               NumbersDayInMonth  = MyLibDate::GetNumberOfDaysInMonth(Year,Date.Month)  ;

               if(RemainderInTotalDays > NumbersDayInMonth )
               {
                     RemainderInTotalDays -= NumbersDayInMonth ;
                      Date.Month++  ;

               }else
               {
                   Date.Day = RemainderInTotalDays  ;
                   break;
               }
          }
          

    return Date ;
}





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

               short Day = ReadDay("ENTER A DAYS PLEASE ?") ;

       short Month = ReadMonth("ENTER A MONTH PLEASE ? ") ;
        short Year = ReadYear("ENTER A YEAR PLEASE ?") ;

      short totalDays =  ConvertDateToNumbersTotalDays( Day,  Month , Year)  ;


       

        sDate Date     =  ConvertNumbersDaysTotalToDate(totalDays,Year)        ;
              cout <<"Dta for [ "<<totalDays <<" ] is  " ;
           cout<<Date.Day  << "/" <<Date.Month <<"/"<<Date.Year      ;












   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
