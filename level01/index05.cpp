#include <iostream>
#include <cmath>  // for ciel function
#include <string>  // for string input

using namespace std ;


int readNumber(string message)
{
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}

float centuryFrom(int number)
{
  return ceil(number / 100) ;
}



int main() {

int num = readNumber(" Enter a number ");
 int result = centuryFrom(num) ;
 cout << "The century of " << num << " is " << result << endl;
 cout << "The century of " << num << " is " << static_cast<float>(result) << endl; // static_cast is used to convert int to float
 

    return 0;
}
