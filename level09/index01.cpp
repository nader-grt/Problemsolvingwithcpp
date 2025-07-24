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












class clsPerson {

    public :
    string firstName   ;
    string lastName  ;
    string FullName()
    {

        return firstName   + "  " + lastName ;
    }
}  ;
    struct  stBirthDate {
        short Days  ,Month , Year  ;
    }  ;


class clsStudent {

 short ReadDays( )
    {
                 short Day  ;
                 cout<<"Enter your Days ?"  ;
                 cin>>Day  ;

                 return Day ;
    }

      short ReadMonth( )
    {
          short Month  ;
                 cout<<"Enter your Month ?"  ;
                 cin>>Month  ;

                 return Month ;
    }

      short ReadYear( )
    {
          short Year  ;
                 cout<<"Enter your Years ?"  ;
                 cin>>Year  ;


                 return Year   ;
    }


short Age ;

 
         public :
    string firstName   ;
    string lastName  ;
    stBirthDate  BirthDateStudent  ;
   // 


  


public:

    stBirthDate  ReadFullDateStudent()
    {
        

                  BirthDateStudent.Days  = ReadDays()   ;
                  BirthDateStudent.Month   =  ReadMonth()   ;
                  BirthDateStudent.Year   =  ReadYear()  ;





        return BirthDateStudent   ;

    }

              

private :
   stBirthDate  GetSystemeDate()
{
        stBirthDate BirthDateSystem  ;
     
            time_t t = time(0);
            tm* now = localtime(&t);  


         BirthDateSystem.Year = now->tm_year + 1900; 
        BirthDateSystem.Month = now->tm_mon + 1;  
        
        BirthDateSystem.Days = now->tm_mday; 

           
         return BirthDateSystem  ;
}




public :
       short GetAge()
       {
            stBirthDate BirthDateSystem =  GetSystemeDate() ;
             Age = (BirthDateSystem.Year  - BirthDateStudent.Year)  ;

            return Age ;
       }
          




}  ;


























int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




clsPerson   Person  ;
Person.firstName   = "Nader"  ;
Person.lastName   = "Chargui"  ;

cout<<Person.FullName()  <<endl  ;





        clsStudent  Student  ;

      Student.BirthDateStudent =   Student.ReadFullDateStudent()  ;

cout<<   Student.BirthDateStudent.Days << "/"  << Student.BirthDateStudent.Month << "/"<<Student.BirthDateStudent.Year   <<endl ;


cout<<Student.GetAge() <<endl  ;







   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
