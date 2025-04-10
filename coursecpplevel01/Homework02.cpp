#include <iostream>

using namespace std ;





int main() {

string str1 = "14587.2250" ;
int num1 ;
double num2 ;
float num3 ;
// Convert string to int
num1 = stoi(str1) ;

cout << "The integer value of the string is: " << num1 << endl;

num2 = stod(str1) ;
cout << "The double value of the string is: " << num2 << endl;


num3 = stof(str1) ;
cout << "The float value of the string is: " << num3 << endl;

 
 

 

    return 0;
}
