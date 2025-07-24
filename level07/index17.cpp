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
   short Days,Month,Year ;
};



bool IsLeapYear(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 &&  Year % 100 != 0))  ;
}



short ReadDay(string message)
{
        short Days  ;
          cout<<message<<endl ;
          cin>>Days ;
        return Days ;
}


short ReadMonth(string message)
{
                 short Month = 1 ;

                    do
                    {
                      cout<<message<<endl ;
                      cin>>Month ;
                    } while (Month > 12 || Month < 1);
                    

                 return Month  ;

}


short ReadYear(string message)
{
         short Year  ;

           cout<<message<<endl ;
           cin>>Year    ;
         return Year  ;
}


StDate  ReadFullDate()
{

     StDate  Date ;
        Date.Days  =   ReadDay("Enter a days ") ;
        Date.Month =   ReadMonth("Enter a month ") ;
        Date.Year  =   ReadYear("Enter a year ")  ;

     return Date  ;
}


short GetNumbersDaysInMonth(short Month ,short Year)
{

    short DaysInMonth[]  = {31,28,31,30,31,30,31,31,30,31,30,31}  ;

    return   (Month == 2 ) ? (IsLeapYear(Year) ? 29 : 28) : DaysInMonth[Month - 1]   ;
}


bool IsLastDayInMonth(StDate  Date)
{

   return Date.Days  == GetNumbersDaysInMonth(Date.Month,Date.Year)  ;
}



bool IsLastMonthInYear(short Month)
{
    return Month == 12  ;
}



StDate  IncreaseDateByOneDay(StDate Date)
{


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
                       Date.Month++;
                   }



            }else
            {

                 Date.Days++ ;


            }

      
        return Date     ;
}















































int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                IncreaseDateByOneDay using c++                 ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


          StDate Date  = ReadFullDate()  ; 

                Date   = IncreaseDateByOneDay(Date)         ;



                cout<<" Date After adding one day is : "<<Date.Days <<"/"<<Date.Month <<"/"<<Date.Year        ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
