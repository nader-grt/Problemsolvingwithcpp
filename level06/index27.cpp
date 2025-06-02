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

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */



/**
 * Generate Fibonacci series into a vector
 * Starting with 1, 1
 * Example: 1, 1, 2, 3, 5, 8, 13, ...
 */
// void ProcessFibonacciSeries(vector<int>& vNumbers, int count) {
//     if (count <= 0) return;

//     vNumbers.push_back(1);
//     if (count == 1) return;

//     vNumbers.push_back(1);

//     for (int i = 2; i < count; ++i) {
//         int next = vNumbers[i - 1] + vNumbers[i - 2];
//         vNumbers.push_back(next);
//     }
// }

void ProcessSerieFibanacy(vector <int> &vNumbers)
{
   int Sum = 0 ;

   vNumbers.push_back(1) ;
      vNumbers.push_back(1) ;

    //    vNumbers[0]  = 1 ;
    //      vNumbers[1]  = 1 ;

   for (short i = 0; i <8; i++)
   {
       Sum = vNumbers[i] + vNumbers[i + 1] ;
         vNumbers.push_back(Sum) ;
   }
   

}


void displayFibonancySerie(vector <int> vNumbers )
{
for (int &number : vNumbers)
{
    cout<<"   "<<number ;
}



}



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


   vector <int> vNumbers  ;



ProcessSerieFibanacy(vNumbers)  ;

displayFibonancySerie(vNumbers)  ;












   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
