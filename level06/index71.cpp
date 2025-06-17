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
namespace fs = std::filesystem;

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */

struct StClient{
   string AccountNumber ="" ;
    string PinCode ;
    string Name = "" ;
    string Phone = "";
    float BalanceAccount ;
}  ;

string GetBaseDirectory()
{

      string baseDir ;
         cout <<"Enter  your path for display dat from file  " ;
            getline(cin>>ws , baseDir)  ;
            while (!fs::exists(baseDir)  && !fs::is_directory(baseDir))
            {
                cout <<"Invalid path ENter   your path again  " ;
            getline(cin>>ws , baseDir)  ;
            }
            

      return baseDir ;
}


string GetFolderName()
{

     string folderName = ""  ;
            
              cout<<"Enter the folder name " ;
              getline(cin,folderName)  ;
              while (folderName.empty())
              {
                  cout<<"Enter the folder name  can not empty ? " ;
              getline(cin,folderName)  ;
              }
              


     return folderName ;
}


  bool FindFolderByName(const string& baseDir, const string& folderName) 
  {

    for (const auto &entry  : fs::recursive_directory_iterator(baseDir))
    {

        //    if (entry.is_directory() && entry.path().filename() == folderName)
        if(entry.is_directory() && entry.path().filename() == folderName)
        {
            return true ;
        }
    }
    
    return false ;
  }


  vector <string> SplitFunction(string line )
  {

          vector <string> vElments ;
          string seperator = "/##/" ,sword = "" ;

          short pos = 0 ;

          while ((pos   = line.find(seperator)) != string::npos)
          {
               sword  = line.substr(0,pos) ;

               if(sword != " ")
               {

                vElments.push_back(sword)   ;
               }
               line.erase(0 ,pos + seperator.length())     ;

          }

           if(line != " ")
               {

                vElments.push_back(line)   ;
               }
          
             return  vElments   ;
  }


   StClient    FillLineEachClientByDataFromFile(string line)
   {
             StClient  Client ;

                vector <string> vElments ;
                  vElments  = SplitFunction(line)  ;
                  Client.AccountNumber  = vElments[0]  ;
                  Client.PinCode    = vElments[1]  ;
                  Client.Name    =  vElments[2]   ;
                  Client.Phone  =  vElments[3]   ;
                    Client.BalanceAccount   =  stof(vElments[4])  ;

             return   Client ;
   }


  vector <StClient> GetDataFromFile(string baseDir,string folderName)
  {
       vector <StClient>   ListCLients ;
       StClient  Client ; 
           string fullPath = baseDir + "/" +  folderName + "/" + "HOME.txt";;
            fstream  ReadFromFile ;
              ReadFromFile.open(fullPath,ios::out  | ios::app | ios::in)  ;

              if(ReadFromFile.is_open())
              {

                   string line ;
                   while (getline(ReadFromFile,line))
                   {
                    Client  =  FillLineEachClientByDataFromFile(line) ;
                    ListCLients.push_back(Client)  ;

                   }
                   ReadFromFile.close()  ;
              }
               
               return ListCLients  ;







  }


   void PrintListCLients(vector <StClient> clients)
   {

                   for (auto &client : clients)
                   {
                        cout << "\nAccount Number: " << client.AccountNumber;
                        cout << "\nPin Code      : " << client.PinCode;
                        cout << "\nName          : " << client.Name;
                        cout << "\nPhone         : " << client.Phone;
                        cout << "\nBalance       : " << fixed << setprecision(2) << client.BalanceAccount << "\n";
                   }
                   
   }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===    GET DATA FROM FILE AND DISPLAY  using c++                  ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



     string baseDir =  GetBaseDirectory()   ;
     string folderName  = GetFolderName()   ;


      if(FindFolderByName(baseDir,folderName))
      {
             vector <StClient>  velement = GetDataFromFile( baseDir, folderName) ;

           PrintListCLients(velement)  ;
      }














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
