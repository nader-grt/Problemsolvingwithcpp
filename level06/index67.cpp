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

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */

struct sClient {
string AccountNumber ="" ;
string PinCode ;
string Name = "" ;
string Phone = "";
float BalanceAccount ;

} ;




  vector <string> SplitFunction(string line,string  seperator)
  {
      vector <string> vCLient ;

      string sword = "" ;
      short pos  = 0 ;

      while (  (pos = line.find(seperator))  != string::npos    )
      {
        sword = line.substr(0,pos)  ;

        if(sword != " ")
        {
          vCLient.push_back(sword) ;
         }
         line.erase(0,pos + seperator.length())  ;
      }
      if(line != " ")
        {
          vCLient.push_back(line) ;
         }

         return   vCLient    ;

  }


  sClient  ConvertLineToRecord(string line,string seperator)
  {
             vector <string> vString ;
             sClient client ;

         vString  =      SplitFunction(line,seperator)  ;

           client.AccountNumber = vString[0] ;
            client.PinCode = vString[1] ;
          client.Name = vString[2] ;
        client.Phone = vString[3] ;
          client.BalanceAccount = stod(vString[4] );

          return client  ;




  }


  void PrintRecordClientBank(  sClient client)
  {


                     cout<< "\n \n  Client Data Of Bank? \n \n \n \n " ;
          
        cout<<"\n  Account Number ";
       cout << client.AccountNumber ;

        cout<<"\n  Pin  Code ";
         cout << client.PinCode ;
      // cin>> client.PinCode;
        cout<<"\n  Your Name ";
        cout << client.Name ;
// cin>> client.Name ;
        cout<<" \n  Your  Phone ";
        cout << client.Phone ;
     //  cin>>client.Phone ;
        cout<<"\n  Account Balance  ";

       cout <<  client.BalanceAccount ;
  }


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;







 string lineRecord ="A25#//#1234#//#Nader#//#99554178#//#57100.000000"  ;

sClient  client ;

          client =     ConvertLineToRecord(lineRecord,"#//#")  ;


          cout<<"\n Original line Record "<<lineRecord ;

PrintRecordClientBank(client)  ;





   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
