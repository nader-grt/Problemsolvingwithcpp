#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;

 
 void ReadNumberUsingVector( vector <int> &vNumbers  )
 {

        bool ReadMore = true ;

     

        do
        {

  int Number = MyLib::ReadNumber("\nPlease enter a number? ")  ;
           
  vNumbers.push_back(Number)  ;


            cout<<"\nDo you want to read more numbers? " ;
               cin>>ReadMore ;
            

              

        } while (ReadMore != false);
        
 }


 
 void PrintNumberUsingVector(vector <int> vNumbers )
 {
     for (int &number  : vNumbers)
     {
        printf("%d\t",number) ;
     }
     

 }


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

   vector <int> vNumbers  ;


ReadNumberUsingVector(vNumbers)  ;


PrintNumberUsingVector(vNumbers)  ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
