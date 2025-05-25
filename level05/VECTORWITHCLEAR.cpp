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

vector <int> vnumbers   ;


vnumbers.push_back(10) ;
vnumbers.push_back(20) ;
vnumbers.push_back(30) ;
vnumbers.push_back(40) ;
vnumbers.push_back(50) ;
vnumbers.push_back(60) ;
vnumbers.push_back(70) ;


  printf(" the size of vectors number size =  %d  \n",vnumbers.size())  ,
vnumbers.pop_back()  ;
vnumbers.pop_back()  ;
vnumbers.pop_back()  ;
vnumbers.pop_back()  ;
vnumbers.pop_back()  ;
vnumbers.pop_back()  ;
vnumbers.pop_back()  ;




// vnumbers.pop_back()  ;

// vnumbers.pop_back()  ;
printf("vectors numbers \n") ;

if(!vnumbers.empty())
for (int &number: vnumbers)
{
    printf("%d ",number) ;
}






   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
