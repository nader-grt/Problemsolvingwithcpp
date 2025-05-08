#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training Data conversion  c++ languages        ====\n"                              ;
   cout<<"======================================================================\n";

cout<<"CONVERT FROM DOUBLE TO INT  HERE DATA LOSS "<<endl ;
int num1 ;
double num2 = 18.21;
 num1  = num2  ;  //  this is represent implicity conversion from double to int 
 num1 = (int) num2 ; // Explicity conversion from double to int  meaning convert num2 to integer the stock it to num1 
 num1 = int(num2)  ;

 cout<<"the number num1 is "<<num1 <<endl ;

 cout<<"CONVERT FROM STRING  TO INT  HERE NO DATA LOSS "<<endl ;
 // using  function stoi  string to int
 // using stof 
 // using stod  

 string str = "123.45"  ;
 
     cout<<"\n" ;
    return 0;
}
