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




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;







vector<int> num{ 1, 2, 3, 4, 5 };


                cout << "Initial Vector: ";

                for (const int& i : num)
                {
                   
                   cout << i << " ";
                }


               cout << "\n\nUpdated Vector: ";




                for ( int& i : num) 
                {
                       
                       
                        i = 20;
                        cout << i << " ";
                }


                    num[1] = 40;

                    num.at(2) = 80;
                    
                    num.at(4) = 90;


                cout << "\n\nUpdated Vector: ";


                for (const int& i : num) 
                {

                   cout << i << " ";
                }











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
