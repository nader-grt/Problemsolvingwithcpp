#include <iostream>
#include <string>

using namespace std ;


// long double double  float long int short char Data loss when transform from hight to lower   
// implicite conversion  
// explicite convertion


int main() {

int num1 = 100 ;
double  num2 = 100.2 ;
num1 = num2 ;// implicite convertion from double to int

// explicite convertion
double num3 = static_cast<double>(num1) ;

cout << "num1 = " << num1 << endl ;
cout << "num3 = " << num3 << endl ;

num1 = int(num2) ; //Explicite convertion 

 string str1 = "1254700.3" ; //

 int num = stoi(str1) ; //
 cout << "num = " << num << endl ;
 

 

    return 0;
}
