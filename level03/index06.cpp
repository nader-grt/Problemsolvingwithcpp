#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

struct StInfo {
    string FirstName ;
    string LastName ;
}  ;

StInfo  ReadInfo()
{

    StInfo  info ;
    cout<< " \n Enter please your first name? "<<endl ;
    cin>>info.FirstName  ;

       cout<< " \n Enter please your last name? "<<endl ;
    cin>>info.LastName  ;

    return info  ;
}

string GetFullName(StInfo  info)
{
    string FullName  ;
    FullName  = info.FirstName  + " "  + info.LastName  ;
    return FullName  ;
}

void PrintFullName(string fName)
{

    cout<<" \n You Full Name is : "<<fName <<endl ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===           Get Full Name  with STRUC DATATYPE                  ====\n"                              ;
   cout<<"======================================================================\n";

PrintFullName(GetFullName(ReadInfo()))  ;
     cout<<"\n" ;
    return 0;
}
