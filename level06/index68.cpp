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

//#include "./../../coursecpp/level05/LibraryOrPackage/MyLib.h"
  // 
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

struct Stclient {
    string AccountNumber ="" ;
string PinCode ;
string Name = "" ;
string Phone = "";
float BalanceAccount ;
}  ;


// vector <string> SplitFunction (string line ,string seperator)
// {
//        vector <string> vString ; 
//        short pos = 0 ;
//        string word =""  ;

//        while (  (pos = line.find(seperator))  != string::npos )
//        {
//             word = line.substr(0,pos)  ;
//             if(word ! = " ")
//             {
//                 vString.push_back(word)  ;
//             }
//             line.erase(0,pos + seperator.length())   ;
//        }
//            if(line ! = " ")
//             {
//                 vString.push_back(line)  ;
//             }
//          return vString  ;
// }


Stclient  ReadCLient()
{

    Stclient  client  ;
         cout<<"\n Adding new line \n\n" ;
      cout<<"\n Enter Account Number ";

      // Usage of std::ws will extract allthe whitespace character
//getline(cin >> ws, Client.AccountNumber);
        getline(cin >> ws,client.AccountNumber) ;

        cout<<"\n Enter Pin  Code ";
          getline(cin,client.PinCode) ;
      // cin>> client.PinCode;
        cout<<"\n Enter Your Name ";
         getline(cin,client.Name) ;
// cin>> client.Name ;
        cout<<" \n Enter Your  Phone ";
         getline(cin,client.Phone) ;
     //  cin>>client.Phone ;
        cout<<"\n Enter Account Balance  ";

    cin>> client.BalanceAccount ;
  return client  ;

}


string ConvertRecordToLine(Stclient  client ,string seperator)
{
       string line = ""  ;
       line += client.AccountNumber + seperator ;
       line += client.PinCode  + seperator ;
       line += client.Name + seperator ;
       line += client.Phone  + seperator ;
       line += to_string(client.BalanceAccount ) ;

       return line ;

}

void ADdNewLineTOfile(string line)
{

   string dirPath =    MyLib::FindDirectoryPathWithFileExtension("Enter your file name to save line ","") ;

           fstream  file ;
         
            file.open(dirPath, ios::out | ios::app); 

    if (file.is_open()) {
        file << line << endl; 
        file.close();         
    } else {
        cout << "Error opening file: " << dirPath << endl;
    }
           
}

void RepeateAddLineToFile(Stclient  &client)
{
    string seperator = "/##/" ;
        bool isRepeate = true ;
          

           
    do
    {
       client =   ReadCLient() ;
        ADdNewLineTOfile(ConvertRecordToLine(client,seperator)) ;
         cout<<"\n Client Added successufly ,Do you add more NO [0] or YES [1] ? " ;
         cin >> isRepeate  ;

    } while (isRepeate);
    


}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


Stclient  client  ;


RepeateAddLineToFile(client)   ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
