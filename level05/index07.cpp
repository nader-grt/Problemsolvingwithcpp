#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     


#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;


struct stEmployee{
    string FirstName ;
    string LastName ;
    string Address ;
    string BirthDay ;
};


void ReadEmployee(stEmployee ArrEmployee[100],int & length)
{
  for (int i = 0; i < length; i++)
  {
     cout<<"      Emp "<<i +1 <<"  "<<endl ;

     cout<<"FirstName Emp ";
     cin.ignore(1,'\n') ;
     getline(cin, ArrEmployee[i].FirstName)  ;
     cout<<"\n LastName Emp ";
        
   cin.ignore(1,'\n') ;
             getline(cin,ArrEmployee[i].LastName)  ;
     cout<<"\n Address Emp ";
        cin.ignore(1,'\n') ;
   getline(cin,ArrEmployee[i].Address)  ;
     cout<<"\n BirthDay Emp ";
        cin.ignore(1,'\n') ;
        getline(cin,ArrEmployee[i].BirthDay)  ;


        cout<<"==============  END =============\n \n  \n \n" ;
  }
  
        
}



void PrintEmployee(stEmployee ArrEmployee[100], int length)
{
  //  stEmployee ArrEmployee[100] ;
    
    for (int i = 0; i < length; i++)
    {
        cout << "==============  START PRINT =============\n\n";
        cout << ArrEmployee[i].FirstName << endl;
        cout << ArrEmployee[i].LastName << endl;
        cout << ArrEmployee[i].Address << endl;
        cout << ArrEmployee[i].BirthDay << endl;
        cout << "==============  END PRINT =============\n\n";
    }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

int length = MyLib::ReadNumber("\n Enter a number? ")  ;

     stEmployee ArrEmployee[100]  ;


ReadEmployee(ArrEmployee ,length)  ;


PrintEmployee(ArrEmployee ,length)  ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
