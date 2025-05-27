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

   string dirPath = "../WORKWITHFILEM";
   // level05 
    filesystem::create_directories(dirPath);  // Create directory if it doesn't exist

    string filePath = dirPath + "/file.txt";

    string filePath2 =  MyLib::ReadFilePathWithExtension("\n Enter your name of file?") ;

    cout<<"\t   filePath2  is \t : "<<filePath2<<endl ;

    cout<<"\n \n \n \n \n \n \n" ;
       fstream MyFile ;

//MyFile.open(filePath,ios::out | ios::app)  ;  // write mode  with append mode 

MyFile.open(filePath2,ios::out | ios::app)  ;  // write mode  with append mode 


if(MyFile.is_open())
{

    for (int i = 0; i < 1; i++)
    {
       MyFile << "\n  this is new content in file" ;
        MyFile << "\n with append MODE" ;
        

        
    }
     MyFile.close()  ;
}















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
