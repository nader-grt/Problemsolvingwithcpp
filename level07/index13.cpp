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




struct StDate {


  short Days  ;
  short Month = 1 ;
  short  Year ;

} ;


bool IsLeapYear(short Year)
{

     return  (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0) ;
}

short ReadDays(string message)
{
  short Days ;

     cout<<message <<endl ;

     cin>>Days  ;


     return Days ;


}


short ReadMonth(string message)
{

          short Month = 1 ;

          do
          {
            cout<<message<<endl ;

            cin>> Month ;
          } while (Month > 12 || Month <1);
          


  return Month ;
}



short ReadYear(string message)
{

          short Year ;
          cout<<message<<endl ;
          cin>>Year ;

  return Year ;
}



StDate  ReadFullDate()
{
   StDate   Date ;
   Date.Days   = ReadDays("Enter a days")   ;
   Date.Month  = ReadMonth("Enter a month")  ;
   Date.Year    = ReadYear("Enter a year ")   ;


   return Date  ;

}



short  GetNumbersDaysInMonth(short Month,short Year)
{

  

                int  NumberOfDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
          return (Month == 2 ) ? (IsLeapYear(Year) ? 29 :28) : ((NumberOfDays[Month -1]) );

   
}


int GetTotalDaysFromBeging(StDate  Date)
{
   
    int TotalDays  = 0 ;


            for (short i = 1; i <= (Date.Month - 1 ); i++)
            {
                   TotalDays +=      GetNumbersDaysInMonth(i,Date.Year)  ;
            }
            

    return (TotalDays  + Date.Days)  ;

}


StDate  converTotalDaysToDateInYear(int TotalDays,short Year)
{

     StDate  Date ;

     int RemainderDaysInYear  = TotalDays ;
     short  NumberDaysInMonth = 0  ;
     Date.Month  = 1 ;
     Date.Year   = Year ;

          while (true)
          {
               NumberDaysInMonth  = GetTotalDaysFromBeging(Date) ;

               if(RemainderDaysInYear > NumberDaysInMonth)
               {
                    RemainderDaysInYear -= NumberDaysInMonth ;
                   Date.Month++ ;
               }else
               {
                   Date.Days  = RemainderDaysInYear ;
                   break;

               }
          }
          

 
     return Date ;
}

int  TotalDaysToAdd(string message)
{
    int DaysToADD  ;

    cout<<message<<endl ;
    cin>>DaysToADD ;

    return     DaysToADD   ;


}




StDate  ConvertDateAfterAddDays(int TotalDayAfterToAdd ,StDate Date)
{
                      //       cout<<"      *********  " <<GetTotalDaysFromBeging(Date)  << "     ********* \n "  ;  
                      short RemainderTotalDays = TotalDayAfterToAdd  + GetTotalDaysFromBeging(Date) ;
                
             //   cout<<"      *********        RemainderTotalDays     " <<RemainderTotalDays << "     ********* \n "  ;  
         

              
                  short NumbersDaysInMonth = 0;
                                   Date.Month  = 1 ;
                 while (true)
                 {
                  
                          

                           NumbersDaysInMonth  = GetNumbersDaysInMonth(Date.Month,Date.Year)  ;

                           if(RemainderTotalDays > NumbersDaysInMonth)
                           {
                                     RemainderTotalDays -= NumbersDaysInMonth;
                                     Date.Month++ ;

                                     if(Date.Month > 12)
                                     {
                                      Date.Month = 1 ;
                                      Date.Year ++ ;
                                     }

                           }else
                           {

                             Date.Days  = RemainderTotalDays ;
                             break;

                           }



                 }
                 
  


   return Date  ;
}




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


              StDate Date =                 ReadFullDate()  ;
             

               int TotalDayAfterToAdd = TotalDaysToAdd("How many day to adds  ")  ;

                     Date =               ConvertDateAfterAddDays(TotalDayAfterToAdd,Date)  ;


                    cout<<"Date after adding days is : "<<Date.Days << "/" << Date.Month  << "/"  <<Date.Year  ;
























   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
