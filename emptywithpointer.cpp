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

//#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


  int size = MyLib::ReadNumber("\nEnter the matrix size: ");
  // Allocate rows
    int** matrix = new int*[size];
    for (int i = 0; i < size; ++i)
        matrix[i] = new int[size];  // Allocate columns














  for (int i = 0; i < size; ++i)
        delete[] matrix[i];
    delete[] matrix;




   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
