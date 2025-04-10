#include <iostream>

using namespace std ;

//problem write a programm PASS OR FAIL If number >=50

  int ReadNumberPositive(string message)
  {
    int number = 0 ;
    do{
   cout<<message<<endl ;
   cin>>number ;

    }while(number <0);
    return number ;
  }
int main() {
     int mark = ReadNumberPositive("Enter a number positive Please ! ") ;
     if(mark >=50)cout<<"PASS";
     else
     cout<<"FAIL";

      
     cout<<"\n" ;
    return 0;
}
