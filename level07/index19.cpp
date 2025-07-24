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
  short Days, Month , Year ;
};


bool IsLeapYear(short Year)
{
   return (Year % 400  == 0 || (Year % 4 == 0 &&  Year % 100 != 0 )) ;
 

}


short ReadDays(string message)
{
      short Days = 0   ;

        cout<<message<<endl ;
        cin>>Days ;
      return Days  ;
}


short ReadMonth(string message)
{

     short Month  = 0 ;
     do
     {
      cout<<message <<endl ;
      cin>>Month ;
     } while (Month > 12 || Month < 1);


     return Month  ;
     

}



short ReadYear(string message)
{

     short Year  = 0 ;
        
           cout<<message<<endl ;

           cin>>Year  ;
     return Year ;

}



StDate  ReadFullDate()
{

            StDate  Date  ;
            Date.Days  = ReadDays("Enter a Days? ") ;
            Date.Month = ReadMonth("Enter a Month? ") ;
            Date.Year  = ReadYear("Enter a year")    ;

            return Date  ;
}



short GetNumbersDaysInMonth(short Month ,short Year)
{

         short DaysMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31}  ;

         return (Month == 2)  ? (IsLeapYear(Year) ? 29 : 28)  : DaysMonth[Month - 1] ;
}



int GetTOtalDayOrderInYear(StDate Date)
{

       int TotalDays = 0  ;

       for (short  i = 0; i <= (Date.Month - 1); i++)
       {
        TotalDays  += GetNumbersDaysInMonth(i,Date.Year)  ;
       }

       return (TotalDays + Date.Days)  ;
       
}


StDate ConverTotalOrderToDate(int TotalDays,StDate Date)
{

              short RemainderDaysInMonth = TotalDays  ;
              short DaysInMonth =  0 ;
              Date.Month = 0 ;

              while (true)
              {
                      DaysInMonth = GetNumbersDaysInMonth(Date.Month,Date.Year)   ;

                      if(RemainderDaysInMonth > DaysInMonth)
                      {
                         RemainderDaysInMonth -= DaysInMonth  ;
                         Date.Month++  ;

                      }else
                      {


                         Date.Days  = RemainderDaysInMonth  ;
                        break;
                      }
              }
              

    return Date       ;
}


bool IsDate1BeforeDate2(StDate Date1,StDate Date2)
{
 return (Date1.Year < Date2.Year) ? true : 
 ( (Date1.Year ==  Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Days < Date2.Days : false)) :false) ;

//       return (Date1.Year < Date2.Year) ? true : ( (Date1.Year == Date2.Year ) ? ( Date1.Month < Date2.Month ? (Date1.Days <Date2.Days :false))  :false    )
}



bool IsLastDayInMonth(StDate Date)
{
      
      return Date.Days  == GetNumbersDaysInMonth(Date.Month,Date.Year)  ;
}



bool IsLastMonthInYear(short Month)
{
         return Month  == 12  ;
}





StDate IncreaseDateByOneDay(StDate Date)
{


            // Date.Month = 0 ;

          
                  if(IsLastDayInMonth(Date))
                  {
                           if(IsLastMonthInYear(Date.Month))
                            {

                               Date.Days = 1 ;
                               Date.Month = 1 ;
                               Date.Year++ ;
                            }else
                            {
                               Date.Days = 1 ;
                               Date.Month ++  ;


                            }



                  }else
                  {
                      Date.Days++   ;
                  }

             
             




         return Date  ;
}


StDate  GetSystemeDate()
{
        StDate Date  ;
     
time_t t = time(0);
 tm* now = localtime(&t);  
    Date.Year = now->tm_year + 1900; 
        Date.Month = now->tm_mon + 1;  
        
           Date.Days = now->tm_mday; 

            //  Date.Year  = ( now->tm_year  + 1900 );
            //  Date.Month = (now->tm_mon + 1 )  ;
            //  Date.Days  = (now->tm_mday)  ;
         return Date  ;
}


int GetDifferenceBetweenDates(StDate Date1 ,StDate Date2,bool IncludeEnDay = false)
{

      int Days = 0  ;


              while (IsDate1BeforeDate2(Date1,Date2))
              {
                Days++  ;
                Date1  = IncreaseDateByOneDay(Date1)   ;
              }
              

      return  IncludeEnDay ? ++Days : Days    ;
}










int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


cout<<"Enter your birth Date \n " ;
          StDate Date1 = ReadFullDate()   ;
          StDate Date2 = GetSystemeDate()  ;
                              int  TotalDaysD  =   GetDifferenceBetweenDates(Date1,Date2)   ;
        cout<<"\n Your Age is  NumbersDay   "  <<  TotalDaysD << " (Days) "  ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
