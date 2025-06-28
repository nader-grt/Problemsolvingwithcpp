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


enum enCRUDOPERATION {SHOWLIST = 1, ADD = 2,FIND = 3 ,UPDATE = 4,DELETE = 5,TRANSACTION =6 , EXIST =7} ;
enum enTransactionOperation {WITHDRAW =1 ,DEPOSIT =2 ,BALANCETOTAL = 3 ,GoBackToMAINMENU = 4 } ;

  string    FULLPATH =  "/home/nader/coursecpp/level04Project/output/HOME/" + string("HOME.txt")  ; 
  //    string fullPath = "/home/nader/coursecpp/level06/output/MylibraryWORKWITHFILE/" + string("HOME.txt");
   
    
     
     struct Stclient {
        string AccountNumber ="" ;
        string PinCode ;
        string Name = "" ;
        string Phone = "";
        float BalanceAccount ;
        bool CheckResult  = false ;
}  ;

      void ShowMenuProjectBank(); 
      void TransactionScreenMenu() ;
     
      Stclient  ReadNewClient()
      {

           cout<<"\n Add client ? \n "  ;
             Stclient  Client ; 
             cout<<"\n Enter Account Number ";
             getline(cin >> ws,Client.AccountNumber) ;

            cout<<"\n Enter Pin  Code ";
            getline(cin,Client.PinCode) ;
    
            cout<<"\n Enter Your Name ";
            getline(cin,Client.Name) ;

            cout<<" \n Enter Your  Phone ";
            getline(cin,Client.Phone) ;
        
            cout<<"\n Enter Account Balance  ";

            cin>> Client.BalanceAccount ;

            return Client  ;

      }

  
      string GetBaseDirectory()
  {
       string baseDir = ""  ;

               cout<<"\n Enter your path ? "  ;
               getline(cin >> ws,baseDir)  ;
             while (!fs::exists(baseDir) && !fs::is_directory(baseDir))
             {
                 cout<<"\n Invalid path  Enter your path again  ? "  ;
                 getline(cin,baseDir)  ;
             }
             
       return baseDir ;
  }

      string GetFolderName()
  {

           string folderName = ""  ;
              cout<<"\n Enter your folderName  ? "  ;
               getline(cin >> ws,folderName)  ;
               while (folderName.empty())
               {
                      cout<<"\n Invalide name not empty Enter your folderName  ? "  ;
               getline(cin,folderName)  ;
               }
               

           return folderName  ;
            
  }

      bool IsExistFolderByName(string baseDir,string folderName)
    {
            for (auto &entry : fs::recursive_directory_iterator(baseDir))
            {
              if(entry.exists()  && (entry.path().filename()  == folderName))
              {
                return true ;
              }
            }
            
               

      return false ;
    }
      
      vector <string> SplitFunction(string line)
     {
             vector <string> vElements ;
             short pos = 0 ;
             string sword = "" , seperator = "/##/"; 

             while ( (pos = line.find(seperator)) != string::npos )
             {
                 sword = line.substr(0,pos)    ;
                 if(sword != " ")
                 {
                    vElements.push_back(sword)  ;
                 }
                 line.erase(0,pos + seperator.length())  ;
             }

                if(line != " ")
                 {
                    vElements.push_back(line)  ;
                 }

             return    vElements  ;
             
     }
      
      Stclient ConverLineToRecordOrClient(string line)
      {        Stclient client ;
               vector <string> vElments = SplitFunction(line)  ;
               if(vElments.size() == 5)
               {
                  client.AccountNumber = vElments[0] ;
                  client.PinCode  = vElments[1] ;
                  client.Name  =   vElments[2];
                  client.Phone  = vElments[3] ;
                  client.BalanceAccount  = stof(vElments[4]) ;

               }
               return client  ;            
      }
      
      string ConvertRecordToLine(Stclient &client)
      {

           string lineRecord = "" , seperator = "/##/";
              lineRecord  +=  client.AccountNumber + seperator ;
              lineRecord += client.PinCode + seperator;
              lineRecord += client.Name + seperator;
              lineRecord += client.Phone + seperator;
              lineRecord +=  to_string( client.BalanceAccount) ;

              return lineRecord  ; 

      }

      void AddRecordToFile(string baseDir,string folderName,string &line)
    {
                    fstream Myfile ;
                   string  fullPath = baseDir + "/" + folderName + "/" + "HOME.txt" ;
                   //   FULLPATH = fullPath ;
                    Myfile.open(fullPath,ios::out | ios::app )  ;

                  if(Myfile.is_open())
                  {

                    Myfile<<line <<endl ;

                    Myfile.close()  ;
                  }
    }
       
      Stclient  ConvertLineToRecordCLinet(string line)
       {
            Stclient  client  ;
           
            vector <string> vClient ;
                vClient = SplitFunction(line)  ;
                   if(vClient.size() == 5)
                   {
                      client.AccountNumber = vClient[0]  ;
                      client.PinCode = vClient[1]  ;
                      client.Name = vClient[2]  ;
                      client.Phone = vClient[3]  ;
                      client.BalanceAccount = stod(vClient[4])  ;
                   }


                return client  ;      
       }

      void AddNewRecordToFile()
       {
       bool Answer = 0 ;
             
             Stclient client  ;

         

             string baseDir = GetBaseDirectory()  ;
             string folderName = GetFolderName()  ;
           //  FULLPATH  = baseDir + folderName + "HOME.txt" ;
            

               do
               {
                            client =       ReadNewClient()  ; 

            string line =      ConvertRecordToLine(client) ;
                    cout<<" Do want to add new record ? ";
                    cin>>Answer ;
                   
                if(Answer && IsExistFolderByName(baseDir,folderName))
                {
                    AddRecordToFile(baseDir,folderName,line)  ;
                    cout<<"\n Client added successfuly " ;
                }else
                {
                   cout<<"\n no  added  " ;
                }
              

               
               } while (Answer);
               
             
         
       }


      vector <Stclient> LoadDatafromFile()
       {
                     vector <Stclient> vListClients ;
                     Stclient Client ;
                     fstream Myfile ;  
                     Myfile.open(FULLPATH,ios::out | ios::app | ios::in)  ;
                    


                     if(Myfile.is_open())
                     {
                       string line ;
                        while (getline(Myfile,line))
                        {
                            Client = ConvertLineToRecordCLinet(line) ;
                            vListClients.push_back(Client)  ;
                        }
                        
                      Myfile.close() ;
                     }


              return vListClients  ;
       }


      void PrintRecordClient(Stclient &client)
       {
                    cout << "| " << setw(15) << left << client.AccountNumber;
                    cout << "| " << setw(10) << left << client.PinCode;
                    cout << "| " << setw(40) << left << client.Name;
                    cout << "| " << setw(12) << left << client.Phone;
                    cout << "| " << setw(12) << left << client.BalanceAccount;
       }
      
      
      void PrintListClients()
       {
       
             vector <Stclient> clients = LoadDatafromFile() ;
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
          for (Stclient Client : clients)
          {
            PrintRecordClient(Client);
            cout << endl;
          }
          cout <<"\n_______________________________________________________";
          cout << "_________________________________________\n" << endl;
          
       }
       
       
      string ReadAccountNumber()
       {
                string AccountNumber = "" ;
                cout<<"\n\n Enter your AccountNumber  ";
                cin>>AccountNumber ;
                return AccountNumber ;
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
        
      bool SearchByAccountNumber(vector <Stclient> &vElmentsClients,string &AccountNumber,Stclient &CLIENT)
       {
               
               for (Stclient &C : vElmentsClients)
               {
                   if(C.AccountNumber == AccountNumber)
                   {
                     CLIENT = C;
                      return true ;
                   }
               }
               return false ;
       }
       
      void FindClientOrRecordByAccountNumber()
       {
                vector <Stclient> vElmentsClients = LoadDatafromFile()  ;
                  string AccountNumber =  ReadAccountNumber()  ;
                  Stclient Client  ;
                    if(SearchByAccountNumber(vElmentsClients,AccountNumber,Client))
                    {
                       PrintClientDetails(Client)  ;

                    }else
                    {
                     cout<<"\n \n  No Client with this "<<AccountNumber << " Account Number " ;
                    }
       }
       
      void CheckClientOrRecordIsDeleted(vector <Stclient> &vElmentsClients,string AccountNumber ,Stclient &CLIENT)
       {
                  for (Stclient &C : vElmentsClients)
                  {
                     if(C.AccountNumber == AccountNumber)
                     {
                        C.CheckResult = true ;
                        CLIENT.CheckResult =    C.CheckResult  ;
                        break;
                     }
                  }
                  
       }

      vector <Stclient> SaveDataClientToFile(vector <Stclient> &vElmentsClients,string AccountNumber ,Stclient &CLIENT)
       {
                     fstream MyFile ;
                     MyFile.open(FULLPATH,ios::out) ;

                     if(MyFile.is_open())
                     {
                                                
                              for (Stclient &C : vElmentsClients)
                              {
                                string line ;
                                if(C.CheckResult ==  false)
                                {
                                   line = ConvertRecordToLine(C) ;
                                   MyFile<<line <<endl ;
                                }
                              }
                                              
                             MyFile.close()  ;
                     }
                       return     vElmentsClients ;
       }

      void DeleteClientByAccountNumber()
       {
                    vector <Stclient> vElmentsClientUpdated ,  vElmentsClients = LoadDatafromFile()  ;
                  string AccountNumber =  ReadAccountNumber()  ;
                  Stclient Client  ;

                  char Answer = 'n' ;
                   if(SearchByAccountNumber(vElmentsClients,AccountNumber,Client))
                    {
                       PrintClientDetails(Client)  ;

                       cout<<"\n\n \n Are you sure Do you want to Delete this client [y/n] ";

                        if(Answer == 'y' || Answer == 'Y')
                        {
                             CheckClientOrRecordIsDeleted(vElmentsClients,AccountNumber,Client) ;
                            vElmentsClientUpdated =  SaveDataClientToFile(vElmentsClients,AccountNumber,Client)  ;
                        }

                         cout<<"\n \n   Client Deleted  with Success  ";
                           PrintListClients()  ;

                    }else
                    {
                     cout<<"\n \n  No Client Deleted  with this "<<AccountNumber << " Account Number " ;
                    }


       }
       
      Stclient ChangeRecordByAccountNumber(string AccountNumber)
        {
               Stclient  client ;
                 client.AccountNumber = AccountNumber ;
                  cout<<"\n Enter Pin  Code ";
            getline(cin>>ws,client.PinCode) ;
    
            cout<<"\n Enter Your Name ";
            getline(cin,client.Name) ;

            cout<<" \n Enter Your  Phone ";
            getline(cin,client.Phone) ;
        
            cout<<"\n Enter Account Balance  ";

            cin>> client.BalanceAccount ;
                  
               return client ;
        }

      void UpdateClientOrRecordByAccountNumber()
       {
                             vector <Stclient>  vElmentsClientUpdated , vElmentsClients = LoadDatafromFile()  ;
                            string AccountNumber =  ReadAccountNumber()  ;
                            Stclient Client  ;
                      char Answer = 'n' ;
                  
                     if(SearchByAccountNumber(vElmentsClients,AccountNumber,Client))
                    {
                       PrintClientDetails(Client)  ;

                       cout<<"\n\n \n Are you sure Do you want to Updated  this client [y/n] ";
                       cin>>Answer ;

                        if(Answer == 'y' || Answer == 'Y')
                        {
                            for (auto &C : vElmentsClients)
                            {
                              if(C.AccountNumber == AccountNumber)
                              {
                                C = ChangeRecordByAccountNumber(AccountNumber)  ;
                                break;
                              }
                            }
                             
                              vElmentsClientUpdated =  SaveDataClientToFile(vElmentsClients,AccountNumber,Client)  ;
                        }
                         cout<<"\n \n   Client Updated  with Success  ";
                           PrintListClients()  ;

                    }else
                    {
                     cout<<"\n \n  No Client updated  with this "<<AccountNumber << " Account Number " ;
                    }
       }
       
      void ShowEndScreen()
       {
          cout << "\n-----------------------------------\n";
          cout << "\tProgram Ends :-)";
          cout << "\n-----------------------------------\n";
       }
      
      
      enCRUDOPERATION  StartActionOperation()
       {
                    
                 short action = 0 ;
          cout<<"\n \n Choose which operation does ? " ;
          cin >> action ;
          return   (enCRUDOPERATION) action;
       }

      void GoBackToMainMenue()
       {
             cout << "\n\nPress any key to go back to Main Menue... \n";
               cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
               cin.get(); // Wait for Enter key
          ShowMenuProjectBank();
      }
        void PrintRecordClientWithTransaction(Stclient &client)
       {
                    cout << "| " << setw(15) << left << client.AccountNumber;
                    cout << "| " << setw(10) << left << client.PinCode;
                    cout << "| " << setw(40) << left << client.Name;
                    cout << "| " << setw(12) << left << client.BalanceAccount;
       }
      int ReadAmountDeposit()
      {
           int DepositAmount  = 0 ;
           cout <<"\n Please Enter DepositAmount ";
           cin>>DepositAmount ;
           return  DepositAmount ; 
      }

      Stclient  OpperationAddDepositAmountInRecordOrClient(float &DepositAmount,Stclient& clientChange)
      {
        Stclient  client ;  
        client.BalanceAccount += DepositAmount ;
        client.AccountNumber = clientChange.AccountNumber ;
          client.PinCode = clientChange.PinCode ;
        client.Name    = clientChange.Name   ;
        client.Phone  = clientChange.Phone ;
        return   client  ;

      }
      
      vector <Stclient> GetDepositAmountWithSuccess(vector <Stclient> &vElmentsClients,string AccountNumber )
      {
               

                    vector<Stclient> vElmentsDeposit;
                    vElmentsDeposit  = vElmentsClients  ;

                    for (Stclient& client : vElmentsDeposit)
                    {
                        if (client.AccountNumber == AccountNumber)
                        {
                            vElmentsDeposit.push_back(client);
                             SaveDataClientToFile(vElmentsClients,AccountNumber,client)  ;
                        }
                    }

                     return vElmentsDeposit;
                  
      }
      

      void DepositWithAccountNumber()
      {
                           vector <Stclient> vElmentsResult  , vElmentsClients = LoadDatafromFile()  ;
                          
                            Stclient Client ,clientDeposite ;
             
                            string AccountNumber = "" ;
                              float  DepositAmount  = 0 ;
                              char Answer = 'n' ;
                         
                          do
                          {
                              AccountNumber =  ReadAccountNumber()  ;
                            if(SearchByAccountNumber(vElmentsClients ,AccountNumber,Client))
                            {
                                 PrintClientDetails(Client)  ;
                                    DepositAmount  = ReadAmountDeposit() ; 
                                cout<<"\n \n Are you sure you want perform this transaction [y/n]  " ; 

                                cin>>Answer  ;

                                if(Answer == 'y' || Answer == 'Y')
                                {

                                   for (Stclient &C : vElmentsClients)
                                   {
                                       if(C.AccountNumber == AccountNumber)
                                       {

                                         C = OpperationAddDepositAmountInRecordOrClient(DepositAmount ,C) ;
                                         clientDeposite = C ;
                                          
                                         break; 
                                       }
                                   }
                                   
                                    cout<<"\n \n Done with success Your Balance Acount for this client is ";
                                    cout<<clientDeposite.BalanceAccount ;

                                        vElmentsClients=    GetDepositAmountWithSuccess(vElmentsClients,AccountNumber)  ;

                                 

                                        
                             
                                 
                                    break;
                                }

                            }else
                            {
                              cout<<"\n Client with  [ " << AccountNumber <<" ] Does not exist " ;

                            }
                          } while (!SearchByAccountNumber(vElmentsClients ,AccountNumber,Client));
                          


      }







        vector <Stclient> GetWithdrawAmountWithSuccessToFile(vector <Stclient> &vElmentsClients,string AccountNumber )
      {
               

                    vector<Stclient> vElmentsWithdraw;
                    vElmentsWithdraw  = vElmentsClients  ;

                    for (Stclient& client : vElmentsWithdraw)
                    {
                        if (client.AccountNumber == AccountNumber)
                        {
                            vElmentsWithdraw.push_back(client);
                             SaveDataClientToFile(vElmentsClients,AccountNumber,client)  ;
                        }
                    }

                     return vElmentsWithdraw;
                  
      }


      int ReadAmountWithdraw()
      {
           int WithdrawAmount  = 0 ;
           cout <<"\n Please Enter WithdrawAmount ";
           cin>>WithdrawAmount ;
           return  WithdrawAmount ; 
      }

       Stclient OpperationWithdrawAmountInRecordOrClient(float &WithdrawAmount ,Stclient  &clientChange) 
       {
              Stclient  client ;  
        client.BalanceAccount -= WithdrawAmount ;
        client.AccountNumber = clientChange.AccountNumber ;
        client.PinCode = clientChange.PinCode ;
        client.Name    = clientChange.Name   ;
        client.Phone  = clientChange.Phone ;
        return   client  ;

       }

      void MakeWithdrawlByACCOUNTnUMBER()
      {

                       vector <Stclient>  vElmentsClientUpdated , vElmentsClients = LoadDatafromFile()  ;
                         //   string AccountNumber =  ReadAccountNumber()  ;
                            Stclient Client ,clientWithdraw ;
                              string AccountNumber = "" ;
                              float  WithdrawAmount  = 0 ;
                              char Answer = 'n' ;

                            do
                            {
                                       AccountNumber =  ReadAccountNumber()  ;
                                        
                              if(SearchByAccountNumber(vElmentsClients ,AccountNumber,Client))
                              {
                                 PrintClientDetails(Client)  ;
                                    WithdrawAmount  =  ReadAmountWithdraw() ; 
                                    while (WithdrawAmount > Client.BalanceAccount)
                                    {
                                      cout << " \n You  have in your  balance that "<< Client.BalanceAccount ;
                                       WithdrawAmount  =  ReadAmountWithdraw() ; 
                                       break;
                                    }
                                    
                                cout<<"\n \n Are you sure you want perform this transaction [y/n]  " ; 

                                cin>>Answer  ;
                                //
                                if(Answer == 'y' || Answer == 'Y')
                                 {
                               
                                            for (Stclient &C : vElmentsClients)
                                            {
                                                if(C.AccountNumber == AccountNumber)
                                                {

                                                  C = OpperationWithdrawAmountInRecordOrClient(WithdrawAmount ,C) ;
                                                  clientWithdraw = C ;
                                                    
                                                  break; 
                                                }
                                            }

                                             cout<<"\n \n Done with success Your Balance Acount for this client is ";
                                    cout<<clientWithdraw.BalanceAccount ;
                                      vElmentsClients =    GetWithdrawAmountWithSuccessToFile(vElmentsClients,AccountNumber)  ;
                                 }

                              }else
                              {
                                cout<<"\n Client with  [ " << AccountNumber <<" ] Does not exist " ;


                              }
                            } while (!SearchByAccountNumber(vElmentsClients ,AccountNumber,Client));
                            
      }

      
      void PrintListClientWithTotalBalance()
      {
                          vector <Stclient>  vElmentsResult , vElmentsClients = LoadDatafromFile()  ;
                      
                           float tOtalBalance = 0 ;

                                    cout << "\n\t\t\t\t\t Client List (" << vElmentsClients.size() << ") Client(s).";
          cout <<"\n_______________________________________________________";
          cout << "_________________________________________\n" << endl;
          cout << "| " << left << setw(15) << "Accout Number";
          cout << "| " << left << setw(10) << "Pin Code";
          cout << "| " << left << setw(40) << "Client Name";
          cout << "| " << left << setw(12) << "Balance";
          cout <<"\n_______________________________________________________";
          cout << "_________________________________________\n" << endl;
          for (Stclient &Client : vElmentsClients)
          {
            tOtalBalance  += Client.BalanceAccount  ;
            PrintRecordClientWithTransaction(Client);
            cout << endl;
          }
          cout <<"\n_______________________________________________________";
          cout << "_________________________________________\n" << endl;
          cout<<"\t \t \t \t  Total balance is "<< tOtalBalance <<endl ;

      }

       

       void GoBackToTransactionMainMenu()
       {
             cout << "\n\nPress any key to go back to Main Menue... \n";
               cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
               cin.get(); // Wait for Enter key
                TransactionScreenMenu() ;
          

      }
      
       enTransactionOperation StartActionTransaction()
       {
                          short action = 0 ;
          cout<<"\n \n Choose which operation does 1 to 4  ? " ;
          cin >> action ;
          return   (enTransactionOperation) action;
       }
      
       void StartTransaction(enTransactionOperation transactionOperation)
       {
                 switch (transactionOperation)
                 {
                 case enTransactionOperation::WITHDRAW  :
                  PrintListClients()  ;
                  MakeWithdrawlByACCOUNTnUMBER() ; 
                  GoBackToTransactionMainMenu() ;
                  break;
                 case enTransactionOperation::DEPOSIT  :
                   PrintListClients()  ;
                   DepositWithAccountNumber() ;
                   GoBackToTransactionMainMenu() ;
                  break;
                 case enTransactionOperation::BALANCETOTAL  :
                   PrintListClientWithTotalBalance() ;
                   GoBackToTransactionMainMenu() ;
                  break;
                case enTransactionOperation::GoBackToMAINMENU :
                   GoBackToMainMenue() ;
                  break;
                 
                 default:
                  break;
                 }  
       }


       void TransactionScreenMenu()
       {
          cout<<"======================================================================\n";
          cout<<"===               Transaction Menu                                ====\n"                              ;
          cout<<"======================================================================\n";
          
          printf("\t [1] Withdraw \n")  ;
          printf("\t [2] Deposit  \n")  ;
          printf("\t [3] Total Balance  \n")  ;
          printf("\t [4] Go Back To Menu Principal \n")  ;
            StartTransaction((enTransactionOperation)  StartActionTransaction() )  ;
 
       }

       void StartProjectBank(enCRUDOPERATION OperationList)
      {
          

              switch (OperationList)
              {
              case enCRUDOPERATION::SHOWLIST :
                  PrintListClients()  ;
                  GoBackToMainMenue() ;
                break;
              case enCRUDOPERATION::ADD :
                  AddNewRecordToFile()  ;
                  PrintListClients()  ;
                  GoBackToMainMenue() ;

                break;
              case enCRUDOPERATION::FIND :
                  PrintListClients()  ;
                  FindClientOrRecordByAccountNumber()  ;
                  GoBackToMainMenue() ;
                break;
              case enCRUDOPERATION::UPDATE :
                 PrintListClients()  ;
                 UpdateClientOrRecordByAccountNumber() ;
                 GoBackToMainMenue() ;
                break;
              case enCRUDOPERATION::DELETE :
                PrintListClients()  ;
                DeleteClientByAccountNumber() ;
                GoBackToMainMenue() ;
                break;
              case enCRUDOPERATION::TRANSACTION :
                TransactionScreenMenu() ;
                break;
              case enCRUDOPERATION::EXIST :
                ShowEndScreen()  ;
                break;
              
              
              default:
                break;
              }
              
            
            
                 
           

      }


       void ShowMenuProjectBank()
        {
          

          printf("\t [1] Show Client list \n")  ;
          printf("\t [2] Add New  Client  \n")  ;
          printf("\t [3] Find  Client  \n")  ;
          printf("\t [4] Updated Client for  list \n")  ;
          printf("\t [5] Delete Client from list \n")  ;
          printf("\t [6] Transaction Menu \n")  ;
          printf("\t [7] Exist   \n")  ;
         
          StartProjectBank((enCRUDOPERATION)  StartActionOperation()) ;

          
        }
        
   
       


    


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                CRUD OPERATION WITH FILE  using c++            ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

        ShowMenuProjectBank()      ;
          












   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
