#include <iostream>
#include <string>

using namespace std ;


int ReadNumber(string message)
{
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}

void swapNumber(int &num1 ,int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {

int num1 ,num2 ;
num1 = ReadNumber("Enter a number 1 is:  ") ;
num2 = ReadNumber("Enter a number 2 is:  ") ;

cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

swapNumber(num1, num2);

cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;


 
//cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
