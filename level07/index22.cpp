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



struct StDate
{
    short Day ,Month ,Year ;
};

bool IsLeapYear(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))   ;
}



short ReadDay(string message)
{
    short Day = 0 ;
       cout<<message<<endl ;
       cin>>Day ;
    return Day ;

}


short ReadMonth(string message)
{
    short Month = 1  ;

 

    do
    {
          cout<<message<<endl ;
    cin>>Month ;
    } while (Month > 12  || Month <1);

    return Month ;
    
}


short ReadYear(string message)
{

    short Year  ;
    cout<<message<<endl ;
    cin>>Year ;
    return Year  ;
}



StDate  ReadFullDate()
{
    StDate Date ;

        Date.Day  = ReadDay("Enter your Day ?")  ;
        Date.Month  = ReadMonth("Enter your Month")  ;
        Date.Year  = ReadYear("Enter your year ") ;
    return Date ;
}

short GetNumbersDaysInMonth(short Month,short Year)
{

    short DaysInMinth[]  = {31,28,31,30,31,30,31,31,30,31,30,31}  ;

    return (Month == 2) ?(IsLeapYear(Year) ? 29 :28) : DaysInMinth[Month - 1 ]  ;
}


bool IsDate1BeforeDate2(StDate Date1,StDate Date2)
{

    return (Date1.Year < Date2.Year) ? true :
    ((Date1.Year == Date2.Year) ?((Date1.Month < Date2.Month ? true : Date1.Month == Date2.Month ? Date1.Day < Date2.Day :false))  :false ) ;
}


bool IsALastDayInMonth(StDate Date)
{

         return Date.Day  == GetNumbersDaysInMonth(Date.Month,Date.Year)  ;
}

bool IsALastMonthInYear(short Month)
{

    return Month == 12  ;
}




short  GetNumbersTotalDaysOrderInYear(StDate Date)
{
         short TotalDaysOrderInYear  = 0  ;


               for (short  i = 1; i <=  (Date.Month - 1); i++)
               {
                 TotalDaysOrderInYear   += GetNumbersDaysInMonth(Date.Month,Date.Year)  ; 
               }
               


         return (TotalDaysOrderInYear  +  Date.Day)  ;

}




StDate  ConvertNumberTotalDaysToDate(short TotalDays,StDate Date)
{
             short RemainderDaysInYear   = TotalDays   ;
             short NumbersDayInMonth = 0    ;

    //   StDate  Date  ;
       Date.Month  =0  ;

         while (true)
         {
               NumbersDayInMonth  = GetNumbersDaysInMonth(Date.Month,Date.Year)   ;

               if(RemainderDaysInYear > NumbersDayInMonth)
               {
                      RemainderDaysInYear -=  NumbersDayInMonth ;
                      Date.Month++  ;

                    


               }else
               {

                 Date.Day = RemainderDaysInYear  ;
                 break;
               }
         }
         


     return  Date  ;
}







StDate DecreaseDateByOneDay(StDate Date)
{

     //    StDate Date  ;

        if (Date.Day == 1)
        { 
            
            if (Date.Month == 1)  
            { 

                Date.Month = 12;
                 Date.Day = 31;
                  Date.Year--; 
            } 
            else
            { 
            Date.Month--;
             Date.Day = GetNumbersDaysInMonth(Date.Month, Date.Year);
            }    
        }
        else
        { 
            Date.Day--;
        }


         return Date ;


}





int GetDifferenceBetweenDates(StDate Date1 , StDate Date2 ,bool IncludeEnDay = false)
{
     int Days  = 0 ;

         while (IsDate1BeforeDate2(Date1,Date2))
         {
              

                 Days++ ;
                 Date1 = DecreaseDateByOneDay(Date1) ;
               
         }
         

     return IncludeEnDay ? ++Days : Days ;
}











StDate DecreaseDateByXDay(short Days,StDate Date)
{

            for (short i = 1; i <= Days; i++)
            {
                Date  = DecreaseDateByOneDay(Date) ;
            }
            return Date ;
            
}


StDate DecreaseDateByOneWeek(StDate Date)
{

    for (short i = 0; i < 7; i++)
    {
        Date  = DecreaseDateByOneDay(Date) ;
    }

    return Date  ;
    
}



StDate DecreaseDateByXWeek(short week,StDate Date)
{

for (short i = 0; i < week; i++)
{
   Date = DecreaseDateByOneWeek(Date)  ;
}

return Date ;
    
}



StDate DecreaseDateByOneMonth(StDate Date)
{
       short currentDaysInMonth = 0 ;

      if(Date.Month == 12)
      {
        Date.Month = 1 ;
        Date.Year++ ;
      }else
      {
        Date.Month++ ;
      }

         currentDaysInMonth = GetNumbersDaysInMonth(Date.Month,Date.Year) ;

         //  31 1 (NumbersDays Month)   to 28 or 29 / 02

         //last check day in date should not 
         //exceed max days in the current month
         // example if date is 31/1/2022 increasing one month should not be 31/2/2022, it should// be 28/2/2022

      if(Date.Day > currentDaysInMonth)
      {
        Date.Day = currentDaysInMonth ;
      }

      return Date ;
    
}




StDate DecreaseDateByXMonth(short Month,StDate Date)
{

    for (short  i = 0; i < Month; i++)
    {
       Date = DecreaseDateByOneMonth(Date)  ;
    }
    
    return Date ;
}


StDate DecreaseDateByOneYear(StDate Date)
{

   
    Date.Year++ ;
    return Date ;
}


StDate DecreaseDateByXYear(short Year,StDate Date)
{

    for (short  i = 0; i < Year; i++)
    {
       Date = DecreaseDateByOneYear(Date);
    }
    
    return Date ;
}


StDate DecreaseDateByXYearFaster(short Year,StDate Date)
{

      Date.Year += Year ;
    
    return Date ;
}


StDate DecreaseDateByOneDecade(StDate Date)
{

      Date.Year +=  10;
    
    return Date ;
}


StDate DecreaseDateByXDecade(short Decade,StDate Date)
{




      for (short i = 0; i < Decade; i++)
      {
        Date  = DecreaseDateByOneDecade(Date)  ;
      }
      
    
    return Date ;
}

StDate DecreaseDateByXDecadeFaster(short Decade,StDate Date)
{

      Date.Year +=  Decade;
    
    return Date ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;





         StDate DecreaseDate   = ReadFullDate(); 


                   cout<<"\n\nThe Date Before any operation "<<endl ;
                      cout<<DecreaseDate.Day <<"/"<<DecreaseDate.Month <<"/"<<DecreaseDate.Year <<endl ;

                      cout<<"\n ";
             DecreaseDate  = DecreaseDateByOneDay(DecreaseDate)    ;
             cout<<"Subtructing one day for Date "<<endl ;
             cout<<DecreaseDate.Day <<"/"<<DecreaseDate.Month <<"/"<<DecreaseDate.Year <<endl ;

                 DecreaseDate =            DecreaseDateByXDay(5,DecreaseDate)  ;

                     cout<<"\nSubtructing x day in this case (5 days ) for last Result Date "<<endl ;
             cout<<DecreaseDate.Day <<"/"<<DecreaseDate.Month <<"/"<<DecreaseDate.Year <<endl ;

                                 

                             DecreaseDate  =    DecreaseDateByOneWeek(DecreaseDate) ;

                                   cout<<"Subtructing one Week for Date "<<endl ;
             cout<<DecreaseDate.Day <<"/"<<DecreaseDate.Month <<"/"<<DecreaseDate.Year <<endl ;
                                 

                  DecreaseDate =               DecreaseDateByXWeek(5,DecreaseDate)  ;


                                             cout<<"Subtructing x  Week for this case ( five week) Date "<<endl ;
             cout<<DecreaseDate.Day <<"/"<<DecreaseDate.Month <<"/"<<DecreaseDate.Year <<endl ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
