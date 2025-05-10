#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

int ReadAge()
{
  int Age ;
  do
  {
    cout<<"\n Enter Your Age PLZ? "<<endl ;
    cin >>Age ;
  } while (Age< 0);

  return Age ;
  
}

bool ValidateNumberInRange(int Number , int From ,int To)
{
  return   Number >=From  && Number <= To   ;
}

void PrintResult(int Age)
{
  if(ValidateNumberInRange(Age,18 ,45))
  cout<< Age<< " is valide Age"<<endl ;
  else 
  cout <<Age <<" is invalide Age" <<endl ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

PrintResult(ReadAge())   ;
     cout<<"\n" ;
    return 0;
}
