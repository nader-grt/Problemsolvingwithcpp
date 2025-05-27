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

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;

   vector <string> vContentFile = {} ;

void CreateContentInFile(string fileName)
{


  string   dirPath = "../MylibraryWORKWITHFILE";
    filesystem::create_directories(dirPath); // Create directory if not exists


      string filePath =   dirPath + "/" + fileName + ".txt";
   fstream MyFile ;

   MyFile.open(filePath,ios::out | ios::app) ;

   int number = MyLib::ReadNumber("\n  How many enter line to file? ") ;
      if(MyFile.is_open())
      {
        string line ;
        for (int i = 0; i <= number; i++)
        {
          cout <<"Tnter the line number "<<i + 1 ;
          getline(cin,line) ;
          MyFile<<line<<endl ;

        }
        

      }



}


void getFromFileToVector(string filePath , vector <string> &vContentFile)
{

   fstream MyFile ;

   MyFile.open(filePath,ios::in) ;

     if(MyFile.is_open())
     {
       string line ;

       while (getline(MyFile,line))
       {

        vContentFile.push_back(line)  ;
        
       }
       
       MyFile.close()  ;

     }


}

void DisplayContentFromFileToVector(vector <string> vContentFile)
{



    
  for (string &line : vContentFile)
  {
      cout<<"\n \n   "<<line <<endl ;
  }
  
}

void TransferDataFromVectorToNewFile(vector <string> vContentFile)
{
  string NameDirotory =  "../MylibraryWORKWITHFILE" ;

  string filePath =  MyLib::FindDirectoryPathWithFileExtension("\n Enter your name of file?",NameDirotory) ;

   fstream MyFile ;

   MyFile.open(filePath,ios::in) ;

   if(MyFile.is_open())
   {

       for (string &line : vContentFile)
  {
     MyFile<<line <<endl ;
  }
    MyFile.close()  ;
   }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



  CreateContentInFile("home") ;

  string NameDirotory =  "../MylibraryWORKWITHFILE" ;

  string filePath =  MyLib::FindDirectoryPathWithFileExtension("\n Enter your name of file?",NameDirotory) ;

getFromFileToVector(filePath,vContentFile)  ;


                   DisplayContentFromFileToVector(vContentFile) ;


TransferDataFromVectorToNewFile(vContentFile)  ;










   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
