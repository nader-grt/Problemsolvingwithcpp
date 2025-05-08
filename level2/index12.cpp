#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void MySumFunctionProcedure()
{
    short nbr1 ,nbr2 ;
    cout<<"ENter the first number is "<<endl ;
    cin>>nbr1 ;

      cout<<"ENter the second number is "<<endl ;
    cin>>nbr2 ;

    cout<<"***************************************** \n" ;
    cout<<nbr1 + nbr2 <<endl ;

}

short MySumWithReturn()
{

      short nbr1 ,nbr2 ;
    cout<<"ENter the first number is "<<endl ;
    cin>>nbr1 ;

      cout<<"ENter the second number is "<<endl ;
    cin>>nbr2 ;

    cout<<"***************************************** \n" ;

    return nbr1 + nbr2  ;
}

int main() {
   
 MySumFunctionProcedure()  ;
cout<<"\n  \n \n"  ;
cout<< MySumWithReturn()  ;

     cout<<"\n" ;
    return 0;
}
