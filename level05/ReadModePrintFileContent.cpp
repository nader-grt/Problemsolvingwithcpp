#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;

void PrintFileContentToerminal(string filePath)
{
                       fstream MyFile;

                      MyFile.open( filePath, ios::in );//read Mode


                if (MyFile.is_open())
                {

                      string Line;

                      while (getline(MyFile, Line))
                      {

                          cout << Line << endl;
                      }

                      MyFile.close();
                }
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

string NameDirotory = "WORKWITHFILE" ;

  string filePath =  MyLib::ReadFilePathWithExtension("\n Enter your name of file?",NameDirotory) ;

PrintFileContentToerminal(filePath)  ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
