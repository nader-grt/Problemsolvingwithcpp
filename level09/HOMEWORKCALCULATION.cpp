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



class clsCaluculator
{
private:
        int   _lastNumber  = 0 ;
        int  _prevResult  = 0 ;
        int  _Result  = 0 ;
        string _LastOperation = "clear" ;

        bool IsNull(int Number)
        {
          return (Number == 0)  ;
        }


public:
  
  void Add(int Number)
  {

            _lastNumber  = Number ;
            _prevResult = _Result ;
            _Result += Number ;
            _LastOperation  = "Adding" ;


      

  }

    void Multiply(int Number)
  {
     _lastNumber  = Number ;
            _prevResult = _Result ;
            _Result *= Number ;
            _LastOperation  = "Multiply" ;
  }

    void Substruct(int Number)
  {

     _lastNumber  = Number ;
            _prevResult = _Result ;
            _Result -= Number ;
            _LastOperation  = "Substruct" ;
    
  }
    void Divide(int Number)
  {

          
           _lastNumber  = Number ;

    if(IsNull(Number))
    {
       Number = 1 ;
       //  _prevResult = _Result ;
    }
    
       _LastOperation  = "Divide" ;
            _prevResult = _Result ;
            _Result /= Number ;
          
    
     
  }

    void Clear()
  {
        _lastNumber  = 0 ;
          _prevResult  = 0 ;
            _Result = 0 ;
  }

   void PrintResult()
   {
       cout<<"Result After " <<  _LastOperation << " for  "   << _lastNumber << " is " <<_Result <<endl ;
   }

};


















int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


clsCaluculator Caluculator  ;



Caluculator.Clear()  ;
Caluculator.Add(10) ;
Caluculator.PrintResult() ;

Caluculator.Add(100) ;
Caluculator.PrintResult()  ;

Caluculator.Substruct(20) ;
Caluculator.PrintResult()  ;


Caluculator.Divide(0) ;
Caluculator.PrintResult()  ;

Caluculator.Divide(2) ;
Caluculator.PrintResult()  ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
