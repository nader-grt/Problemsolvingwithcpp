#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;



struct stEmployee{

    string firstName ;
    string lastName ;
    double Salary ;

} ;



void ReadEmployeeUsingVector(vector <stEmployee> &vEmployee ,stEmployee  &Employee  )
{

        int  length  = MyLib::ReadNumber("Enter a number ")  ;

        for (int i = 0; i < length; i++)
        {

            cout<<"\n \n \n \n ============== Employee " << i + 1 << " ====================== \n \n\n " ;
           cout<<setw(6)<<"\n Enter f name " ;
           cin.ignore(1,'\n') ;
           getline(cin ,Employee.firstName) ;

             cout<<setw(6)<<"\n Enter l name " ;
           cin.ignore(1,'\n') ;
           getline(cin ,Employee.lastName) ;

              cout<<setw(6)<<"\n Enter the salalry  " ;
          // cin.ignore(1,'\n') ;
        cin>>Employee.Salary ;

          vEmployee.push_back(Employee)  ;


          cout<<"\n ================================================================= \n \n"  ;
           
        }
        



}


void PrintEmployeeUsingVector(vector <stEmployee> vEmployee )
{

    cout<<"\n ====================================================================================\n" ;

    cout<<"| first name emp\t"<<setw(6)<<"| last name emp \t\t"<<setw(6)<<"| salary \t\t\t"<<"|" ;
    cout<<"\n ====================================================================================\n" ;

for (stEmployee &emp : vEmployee)
{
  
      cout<<"\n| "<< emp.firstName <<"\t"<<setw(10)<<"| "<<emp.lastName<<"\t\t" <<setw(10)<<"| "<< emp.Salary <<"\t\t"<<"|\n" ;


}

    
}




//  teacher 

// void ReadEmployees(vector <stEmployee>& vEmployees)
// {
// char ReadMore = 'Y';
// stEmployee tempEmployee;
// while (ReadMore == 'Y' || ReadMore == 'y')
// {
// cout << "Enter FirstName? ";
// cin >> tempEmployee.FirstName;
// cout << "Enter LastName? ";
// cin >> tempEmployee.LastName;
// cout << "Enter Salary? ";
// cin >> tempEmployee.Salary;
// vEmployees.push_back(tempEmployee);
// cout << "\nDo you want to read more employees? Y/N ?";
// cin >> ReadMore;
// }
// }


// void PrintEmployees(vector <stEmployee>& vEmployees)
// {
// cout << "\nEmployees Vector: \n\n";
// // ranged loop
// for (stEmployee& Employee : vEmployees) {
// cout << "FirstName: " << Employee.FirstName << endl;
// cout << "LastName : " << Employee.LastName << endl;
// cout << "Salary : " << Employee.Salary << endl;
// cout << endl;
// }
// cout << endl;
// }





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


vector <stEmployee> vEmployee  ;

stEmployee  Employee  ;
ReadEmployeeUsingVector(vEmployee ,Employee)  ;

PrintEmployeeUsingVector(vEmployee)  ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
