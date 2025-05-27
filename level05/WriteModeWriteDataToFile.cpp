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


#include "LibraryOrPackage/MyLib.h" 


using namespace std ;




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

     string dirPath = "../WORKWITHFILE";
    filesystem::create_directories(dirPath);  // Create directory if it doesn't exist

    string filePath = dirPath + "/file.txt";

       fstream MyFile ;

MyFile.open(filePath,ios::out)  ;  // write mode


if(MyFile.is_open())
{

    for (int i = 0; i < 1; i++)
    {
       MyFile << "\n Hello this is content in file" ;
        MyFile << "\n when more practice more understand" ;
         MyFile << "\n Get GOOD RESULT " ;

        
    }
     MyFile.close()  ;
}














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
