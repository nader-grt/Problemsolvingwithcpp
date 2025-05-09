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
    cout<<" \nEnter your first name ? "<<endl ;
    cin>>info.FirstName  ;
    cout<<"\n Enter your last name ? "<<endl ;
    cin >>info.LastName  ; 
   return info  ;
}

string GetFullName(StInfo info , bool reversed = true)
{
    string FullName   ;

    if(reversed)
    {
         FullName = info.FirstName + " " + info.LastName  ;
    }else
    {
         FullName = info.LastName + " " +  info.FirstName  ;
    }

    return FullName  ;
}

void PrintFullName(string FullName)
{
cout<<" \n Your Full Name is "<< FullName <<endl;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===             Get Full Name with reversed             ====\n"                              ;
   cout<<"======================================================================\n";
              PrintFullName(GetFullName(ReadInfo() ,false))    ; 

     cout<<"\n" ;
    return 0;
}
