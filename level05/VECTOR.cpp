#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>

#include "LibraryOrPackage/MyLib.h" 


using namespace std ;


struct stPerson{
    string FirstName ;
    string LastName ;
    string Address ;
  
} ;

void AddPersonUsingVector(vector<stPerson> &vPersons, stPerson &Person,int &Number)
{

for (int i = 0; i < Number; i++)
{

     cout<<" Person "<<i + 1 <<endl ;
      cout<<setw(4)<<" Enter first name ";
    cin.ignore(1,'\n') ;
    getline(cin,Person.FirstName  ) ;



    cout<<setw(4)<<" Enter last name ";
    cin.ignore(1,'\n') ;
    getline(cin,Person.LastName  ) ;

    cout<<setw(4)<<" Enter a address ";
    cin.ignore(1,'\n') ;
    getline(cin,Person.Address  ) ;
    
    vPersons.push_back(Person);

}

    
}

void ReadPersonUsingVector(vector<stPerson> &vPersons, stPerson &person )
{
         bool  ReadMore = true ;
         int Number  = MyLib::ReadNumber("Enter a numbers persons? yes [1] or no [0] : ");
    do
    {     cout<<"Do you want add again yes [1] or no [0] : " ;
        cin>>ReadMore ;
        AddPersonUsingVector(vPersons ,person ,Number) ;
      
    } while (ReadMore != true);
    
}

void PrintPersonUsingVector( vector<stPerson> &vPersons)
{


for (stPerson &per : vPersons)
{
     cout<<"\n\n ==================== \n " ;

   cout<<setw(5)<<  per.FirstName<<endl ;
    cout<<setw(5)<<per.LastName<<endl ;
        cout<<setw(5)<<per.Address<<endl ;

       
}

    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

//vector  <int> vNumbers = {10,20,30,40} ;
     stPerson  Person ;

     
    vector<stPerson> vPersons;

ReadPersonUsingVector(vPersons,Person) ;


PrintPersonUsingVector(vPersons) ;


//     person.FirstName = "Nader";
//     person.LastName = "Chargui";
//     person.Address  = "Tunis Ariana  Nozha";


//     vPersons.push_back(person);


// for (int &number : vNumbers)
// {
//     printf("%d  ",number) ;
// }
// cout<<endl ;
// cout<<"================== \n \n \n "  ;

// for (stPerson &per : vPersons)
// {
//    cout<<per.FirstName<<endl ;
//     cout<<per.LastName<<endl ;
//         cout<<per.Address<<endl ;

// }

















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
