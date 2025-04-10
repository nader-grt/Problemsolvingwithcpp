#include <iostream>
#include <cmath>

using namespace std ;

bool ReadAge(string message)
{
    int age =0;
    do
    {
       cout<<message<<endl ;
       cin>>age ;
    } while ( !(age >=18 && age <=45 ));
    return true ;
}


int main() {
   
bool result = ReadAge("Enter age between 18 and 45 please ! ") ;
if(result)cout<<"\n valid age"<<endl ;
else
cout<<"\n invalid age \n" ;

     cout<<"\n" ;
    return 0;
}
