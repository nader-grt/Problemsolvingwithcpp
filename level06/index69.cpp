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

struct Stclient {
    string AccountNumber ="" ;
string PinCode ;
string Name = "" ;
string Phone = "";
float BalanceAccount ;
}  ;

string GetBaseDirectoryFromUser()
{

    string baseDir = ""  ;

      cout<<" \n Enter the path  like home\\user .." ;
      getline(cin,baseDir)  ;
//!fs::exists(baseDir) || !fs::is_directory(baseDir)
      while (!fs::exists(baseDir) || !fs::is_directory(baseDir))
      {
          cout<<" \n Invalid path please enter  the path  correct  like home\\user  " ;
      getline(cin,baseDir)  ;
      }
        return baseDir ;

         
}

string GetFolderNameFromUser()
{
      string folderName = "" ;
      cout <<"\n Enter the name of folder search for   "  ;
      getline(cin,folderName)  ;
      while (folderName.empty())
      {
         cout << "Folder name cannot be empty. Please enter a valid folder name: ";
            getline(cin, folderName);
      }
      
      return folderName  ;
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

    // void GetDataFromFile(string &dir ,string folderName)
    // {

    //     //  fs::path fullPath = fs::path(dir) / folderName / "HOME.txt";
    //              string fullPath = dir + "/" +  folderName + "/" + "HOME.txt";;
    //         fstream  ReadFromFile ;

    //         ReadFromFile.open(fullPath,ios::app | ios::in)  ;
    //         if(ReadFromFile.is_open())
    //         {

    //               string line ;
    //               while (getline(ReadFromFile,line))
    //               {
    //                cout<<line  << "   \n"  ;
    //               }
    //                ReadFromFile.close()  ;
    //         }  else
    // {
    //     cout << " Failed to open file: " << fullPath << "\n";
    // }

       
    // }


            vector<string> SplitString(string line, string Delim)
            {

                  vector<string> vString;

                  short pos = 0;
                  string sWord; // define a string variable

                  // use find() function to get the position of the delimiters
                  while ((pos = line.find(Delim)) != std::string::npos)
                  {
                      sWord = line.substr(0, pos); // store the word

                      if (sWord != "")
                      {
                          vString.push_back(sWord);
                      }

                      line.erase(0, pos + Delim.length());
                  }

                  if (line != "")
                  {

                       vString.push_back(line); // it adds last word of the string.

                  }
                         return vString;
             }


      vector <string>  GetDataFromFile(string &dir ,string folderName)
    {

        vector <string> vContentFromFile ;
        //  fs::path fullPath = fs::path(dir) / folderName / "HOME.txt";
                 string fullPath = dir + "/" +  folderName + "/" + "HOME.txt";;
            fstream  ReadFromFile ;

            ReadFromFile.open(fullPath,ios::app | ios::in)  ;
            if(ReadFromFile.is_open())
            {

                  string line ;
                  while (getline(ReadFromFile,line))
                  {
                  // cout<<line  << "   \n"  ;
                         
                //   vContentFromFile  = SplitString(line,"/##/") ;  
                 vContentFromFile.push_back(line) ;
                  }
                   ReadFromFile.close()  ;
            }  
   
       return vContentFromFile  ;
       
    }
        Stclient  ParseClientFromLine(string line  )
        {
               Stclient  listClient ;
               vector <string>   vElements ;  
               vElements =    SplitString(line ,"/##/") ;  


                       if (vElements.size() >= 5) {
          listClient.AccountNumber = vElements[0];
          listClient.PinCode = vElements[1];
          listClient.Name = vElements[2];
          listClient.Phone = vElements[3];
        try {
              listClient.BalanceAccount = stof(vElements[4]);
        } catch (const std::exception& e) {
            cout << "Invalid balance: " << vElements[4] << " — setting to 0.0\n";
              listClient.BalanceAccount = 0.0f;
        }
    } else {
        cout << "Error: not enough data to fill client.\n";
    }
              
             return     listClient ; 

        }

        vector<Stclient>   ParseAllClients(vector <string> &vContentFile )
       {
                 
                  Stclient  listClient[3]   ;
  vector<Stclient> clients;

                
                  
               for (auto &ele : vContentFile)
               {
                    
                   clients.push_back(ParseClientFromLine(ele))  ;
               }
               

               return clients  ;
                 
               
       }


   void PrintListClients(const vector<Stclient>& clients) {
    cout << "\nClient Data:\n";
    for (const auto& client : clients) {
        cout << "\nAccount Number: " << client.AccountNumber;
        cout << "\nPin Code      : " << client.PinCode;
        cout << "\nName          : " << client.Name;
        cout << "\nPhone         : " << client.Phone;
        cout << "\nBalance       : " << fixed << setprecision(2) << client.BalanceAccount << "\n";
    }
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


           string baseDirectory = GetBaseDirectoryFromUser()  ;
           string folderName   = GetFolderNameFromUser()   ;
           vector <string> vContentFile ;




  if(FindFolderByName(baseDirectory,folderName))
  {
// vContentFile  =   GetDataFromFile(baseDirectory,folderName) ;
   cout<<"hi \n \n \n \n"  ;
      
   vector<string> fileLines = GetDataFromFile(baseDirectory, folderName);
        vector<Stclient> clients = ParseAllClients(fileLines);
        PrintListClients(clients);

     

  }else
  {
    cout<<"\n no thing " ;
  }















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
