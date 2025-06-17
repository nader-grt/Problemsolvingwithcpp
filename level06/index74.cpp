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

 string static FULLPATH ;

struct Stclient {
        string AccountNumber ="" ;
        string PinCode ;
        string Name = "" ;
        string Phone = "";
        float BalanceAccount ;
        bool CheckResult  = false;
}  ;

   

     string GetBaseDirectory()
     {
        string baseDir = ""  ;
        cout<<"\n Enter youe path " ;
        getline(cin,baseDir)    ;       ;
         while (!fs::exists(baseDir) && !fs::is_directory(baseDir))
         {
            cout<<" \n Enter Your path " ;
             getline(cin,baseDir)    ; 

         }
              return baseDir  ;
       

     }
     string GetFolderName()
     {
        string folderName =""  ;
           cout<< "Enter your folder name "  ;
           getline(cin>>ws ,folderName)  ;

           while (folderName.empty())
           {
            cout<<" invalider write a name of folderName " ;
            getline(cin,folderName)  ;
           }
           
        return folderName ;
     }
     
     bool IsFindFolderByName(string baseDir,string folderName)
     {
        for (auto &empty : fs::recursive_directory_iterator(baseDir))
        {
            if(empty.exists()  && empty.path().filename()  == folderName)
            {
                return true ;
            }
        }
        

        return  false ;
     }

     vector <string> SplitFunction(string line)
     {
           vector <string>  vElements  ; 
           string sword = "" ,seperator = "/##/" ;
           short pos = 0 ;
           while ((pos = line.find(seperator)) != string::npos)
           {
            sword = line.substr(0,pos)  ;
            if(sword != " ")
            {
                vElements.push_back(sword)  ;
            }
            line.erase(0,pos + seperator.length()) ;
           }
           if(line != " ")
           {
            vElements.push_back(line) ;
           }
           return vElements  ;
     }

     Stclient ConvertLineToRecord(string line)
     {
           vector <string> vElments = SplitFunction(line);  
           Stclient  Client ;
           if(vElments.size() == 5)
           {
               Client.AccountNumber = vElments[0] ;
               Client.PinCode  = vElments[1] ;
               Client.Name  = vElments[2] ;
               Client.Phone  = vElments[3];
               Client.BalanceAccount  = stof(vElments[4]) ;
           }  
           return Client  ;       
     }

     vector <Stclient> LoadDataFromFile(string baseDir = "" ,string folderName = "")
     {
                     FULLPATH = baseDir + "/" + folderName +"/" + "HOME.txt" ;
          
              
                
           vector <Stclient> vClientList ;
           Stclient  client ;
           fstream MyFile ;
           MyFile.open(FULLPATH, ios::out | ios::app | ios::in)  ;

           if(MyFile.is_open())
           {
            string line ;
             while (getline(MyFile,line))
             {
                  client  = ConvertLineToRecord(line)  ;
                  vClientList.push_back(client)  ;
             }
            MyFile.close()  ;
           }
           return vClientList ;

     }

     void PrintCardClient(Stclient &client)
     {
                    cout << "| " << setw(15) << left << client.AccountNumber;
                    cout << "| " << setw(10) << left << client.PinCode;
                    cout << "| " << setw(40) << left << client.Name;
                    cout << "| " << setw(12) << left << client.Phone;
                    cout << "| " << setw(12) << left << client.BalanceAccount;
     }

     void PrintListClients(vector <Stclient>  &clients)
     {
            cout << "\n\t\t\t\t\t Client List (" << clients.size() << ") Client(s).";
          cout <<"\n_______________________________________________________";
          cout << "_________________________________________\n" << endl;
          cout << "| " << left << setw(15) << "Accout Number";
          cout << "| " << left << setw(10) << "Pin Code";
          cout << "| " << left << setw(40) << "Client Name";
          cout << "| " << left << setw(12) << "Phone";
          cout << "| " << left << setw(12) << "Balance";
          cout <<"\n_______________________________________________________";
          cout << "_________________________________________\n" << endl;
          for (Stclient &Client : clients)
          {
            PrintCardClient(Client);
            cout << endl;
          }
          cout <<"\n_______________________________________________________";
          cout << "_________________________________________\n" << endl;
     }

     bool FindClientByAccountNumber(vector <Stclient> &ClientList,string AccountNumber, Stclient  &CLIENT)
     {
         
             for (Stclient &Client : ClientList)
          {
            if(Client.AccountNumber == AccountNumber)
             {
                CLIENT = Client ;
                return true ;
             }
          } 

        return false ;
     }


     string ReadAccountNumber()
     {
        string accountNumber = ""  ;
            
           cout<<"\n Enter Account Number " ;
           getline(cin,accountNumber)  ;

            return  accountNumber  ;

     }
  
     void PrintClientDetails(Stclient Client)
    {
        cout << "\nThe following are the client details:\n";
        cout << "\nAccout Number: " << Client.AccountNumber;
        cout << "\nPin Code : " << Client.PinCode;
        cout << "\nName : " << Client.Name;
        cout << "\nPhone : " << Client.Phone;
        cout << "\nAccount Balance: " << Client.BalanceAccount;
    }
   
   
   
    string ConvertRecordOrCLientToLine(Stclient  &CLIENT)
    {
         string seperator = "/##/"   ;
         string LineRecord = "" ;
          LineRecord += CLIENT.AccountNumber + seperator;
          LineRecord += CLIENT.PinCode  + seperator;
          LineRecord += CLIENT.Name + seperator ;
          LineRecord += CLIENT.Phone + seperator ;
          LineRecord += to_string( CLIENT.BalanceAccount);

          return  LineRecord ;


    }
   
     bool ClientIsDeletedWithCheckResult(vector <Stclient> &ClientList,string AccountNumber )
     {
             for (Stclient &C : ClientList)
             {
               if(C.AccountNumber == AccountNumber)
               {
                C.CheckResult  = true ;
                return true ;
               } 
             }
          return false ;   
     }
    
     vector <Stclient>    SaveDataToFileWithCheckResult(vector <Stclient> &ClientList ,string &fullPath)
     {
             
               
                   vector <Stclient> vClientList ;
           Stclient  client ;
           fstream MyFile ;
           MyFile.open(fullPath, ios::out)  ;
           string line ;

          
              if(MyFile.is_open())
              {
                    for (Stclient &C : ClientList)
                    {
                            if(C.CheckResult == false)
                            {

                            line =  ConvertRecordOrCLientToLine(C)  ;
                            MyFile<<line <<endl ;

                            }
                    }
                    MyFile.close()  ;
              }
          
           return ClientList ;
             

     }


     bool DeleteClientByAccountNumber(string baseDir,string folderName ,vector <Stclient> &ClientList,string AccountNumber, Stclient  &CLIENT ,vector <Stclient> &ClientListUpdated)
     {    
               char Answer = 'n' ;
         
                if(FindClientByAccountNumber(ClientList ,AccountNumber,CLIENT))
                {
                  string fullPath = "/home/nader/coursecpp/level06/output/MylibraryWORKWITHFILE/" + string("HOME.txt");


                PrintClientDetails(CLIENT)  ;
           

                cout<<"\n \n  \n \n Do you want to delete this client y/n ?  ";
                cin>>Answer ;

                if(Answer == 'y' || Answer == 'Y')
                {

                        ClientIsDeletedWithCheckResult(ClientList ,AccountNumber)  ;
                  ClientList = SaveDataToFileWithCheckResult(ClientList,fullPath )  ;
                }

                   ClientList  =  LoadDataFromFile(baseDir,folderName)  ; 
                   ClientListUpdated = ClientList ;

                   cout<<"\n \n \n Client deleted succesfully \n \n \n \n \n " ;

            
                   return true ;

                }else
                {
                cout<<"\n Not client with this Account Number  " <<AccountNumber<<endl ;
                return false ;

                }

     }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

     string baseDir = GetBaseDirectory()  ;
     string folderName = GetFolderName() ;
      vector <Stclient> ClientListUpdated, vClients  = LoadDataFromFile(baseDir,folderName)  ;
       
         Stclient  client ;
    
     if(IsFindFolderByName(baseDir,folderName))
     {

        PrintListClients(vClients)  ;
         string AccountNumber = ReadAccountNumber()  ;
      
         if(DeleteClientByAccountNumber(baseDir,folderName, vClients ,AccountNumber,client,ClientListUpdated))
        {
          PrintListClients(ClientListUpdated)  ;
            
        }else
        {
         cout<<"\n Not client with this Account Number  " <<AccountNumber<<endl ;

        }
     }else
     {
          cout<<"\n Not folder  with this  Name   " <<folderName <<endl ;
     }

















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

   
    return 0;
}
