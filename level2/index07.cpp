#include <iostream>
#include <cmath>
#include <string>


using namespace std ;
// problem in century   how many years (9aress gedech fyyh min 3am )  using function ceil 

void PrintNumbersInCentury(string message)
{
 float number   ;
do
{
   cout<<message<<endl ;
   cin >>number ;

} while (number < 0 && number <=100 );
 cout<<"the result is \t "<<number / 100<<endl ; 
 cout<<"the result is \t "<<ceil(number / 100)<<endl ; 

}
int main() {
   
    PrintNumbersInCentury("enter th number of century please !") ;


     cout<<"\n" ;
    return 0;
}
