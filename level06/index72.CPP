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


struct StClient{
   string AccountNumber ="" ;
    string PinCode ;
    string Name = "" ;
    string Phone = "";
    float BalanceAccount ;
}  ;

string GetBaseDirectory()
{

    string baseDir = ""  ;

        cout <<" Enter your path    ";
                      getline(cin,baseDir)  ;
                      while (!fs::exists(baseDir)   && !fs::is_directory(baseDir))
                      {
                           cout <<" Invalid path  Enter your path again     ";
                      getline(cin,baseDir)  ;  
                      }
                      

    return baseDir ;


}

string GetFolderName()
{

       string folderName = ""  ;
                      cout <<" Enter your folderName   ";
                      getline(cin,folderName)  ;

                      while (folderName.empty())
                      {
                        cout <<" Invalide folder name not empty enter again " ;
                        getline(cin,folderName)  ;

                      }
                      

       return folderName  ;
}


bool findDirectoryByName(string baseDir , string folderName)
{
              
                for (auto &entry  : fs::recursive_directory_iterator(baseDir))
                {
                  if(entry.exists()   && entry.path().filename()   == folderName)

                  return true ;
                }
                
              
              return false ;
}


vector <string> SplitFunction(string line)
{
     vector <string>   vString ;
   string seperator = "/##/" , sword = ""  ;

       short  pos = 0 ;

       while (   (pos = line.find(seperator))  != string::npos )
       {
           sword = line.substr(0,pos)  ;
           if(sword != " ")
           {

            vString.push_back(sword)  ;
           }
           line.erase(0,pos + seperator.length())    ;
       }
       
       if(line != " ")
       {
            vString.push_back(line)  ;

       }

         return vString  ;







}





  StClient  GetClient(string line)
  {

       StClient  Client  ;
          vector <string> vElements ;
          vElements  = SplitFunction(line)   ;
             Client.AccountNumber = vElements[0]  ;
            Client.PinCode = vElements[1]  ;
          Client.Name = vElements[2]  ;
          Client.Phone = vElements[3]  ;
           Client.BalanceAccount = stof(vElements[4])  ;

     return Client  ;

  }

  vector <StClient>   GetDataFromFile(string baseDir,string folderName)
  {
              vector <StClient>   listCLients ;
              StClient Client  ;
              string fullPath =  baseDir + "/" + folderName + "/" +"HOME.txt"  ;
              fstream  file ;
              file.open(fullPath,ios::out | ios::app | ios::in  )  ;

              if(file.is_open())
              {
                  
                    string line ;
                    while (getline(file,line))
                    {
                       Client =   GetClient(line)  ;
                          listCLients.push_back(Client)  ;
                    }
                    file.close() ;
                    
              }
                           return   listCLients     ; 
  }


      void PrintLIstClients(vector <StClient> clients)

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
  


        void  FindCLientByAccountNumber(vector <StClient> clients ,string &AccountNumber )

      {

                         for (auto &client : clients)
                   {

                        if(client.AccountNumber   == AccountNumber)
                        {
                             cout << "\nAccount Number: " << client.AccountNumber;
                        cout << "\nPin Code      : " << client.PinCode;
                        cout << "\nName          : " << client.Name;
                        cout << "\nPhone         : " << client.Phone;
                        cout << "\nBalance       : " << fixed << setprecision(2) << client.BalanceAccount << "\n";
                        break; 
                        }
                   }

           
      }





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


   string baseDir = GetBaseDirectory()  ;
   string folderName = GetFolderName()  ;


   if(findDirectoryByName(baseDir,folderName))
   {

       vector <StClient> vClients = GetDataFromFile(baseDir,folderName)  ;

       PrintLIstClients(vClients)  ;

       string acountNumber = ""  ;
       cout<<"\n Enter your acounct number for search " ;
       getline(cin ,acountNumber)  ;

       FindCLientByAccountNumber(vClients, acountNumber)  ;


   }
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
