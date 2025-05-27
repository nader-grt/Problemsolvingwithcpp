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

vector <string> loadDataFromFile = {} ;

void AddLineByLineToVectore(vector <string> &loadDataFromFile ,string &line) 
{


  //  if(loadDataFromFile.empty())
      loadDataFromFile.push_back(line) ;
        

      
      

}

void PrinLineByLineToVectore(vector <string> loadDataFromFile)
{

    for (string &line : loadDataFromFile)
{

  //  if(loadDataFromFile.empty())
      cout <<"\n \n " << line <<endl  ;
        

      
      }
}

void PrintFromFileToTerminalOrConsole(string &filePath )
{

              fstream  myfile ;
              myfile.open(filePath, ios::in) ; // read file mode read

              if(myfile.is_open())
              {
                string line ;

                while (getline(myfile,line))
                {

                     AddLineByLineToVectore(loadDataFromFile ,line) ;
                   //cout<<line <<endl ;
                }
                
                myfile.close()  ;
              }
}





// other method 

void LoadDataFromFileToVector(string FileName, vector <string>&vFileContent)
{
                fstream MyFile;
                MyFile.open(FileName, ios::in);//read Mode

                if (MyFile.is_open())
                {
                    string Line;

                    while (getline(MyFile, Line))
                    {
                    
                      
                       vFileContent.push_back(Line);
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

//vector <string> loadDataFromFile = {} ;

PrintFromFileToTerminalOrConsole(filePath)  ;



  cout<<"\n ======================================================================\n";
PrinLineByLineToVectore(loadDataFromFile)  ;

// for (string &name : loadDataFromFile)
// {
//        cout<<name <<"   " ; 
// }



cout<<endl ;



vector <string> vFileContenet;
LoadDataFromFileToVector("MyFile.txt", vFileContenet);
for (string &Line : vFileContenet)
{
cout << Line << endl;
}





   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}


