#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.

// Function: MyABS
// Purpose: Computes the absolute value of a floating-point number.
// Parameters:
//   - Number: A floating-point number whose absolute value is to be determined.
// Returns: The absolute value of the input number.
float MyABS(float Number)
{
    // If the number is positive or zero, return it as is.
    if (Number > 0)
        return Number;
    else
        return Number * -1; 
}


float ReadNumber()
{
    float Number; 
    
  
    cout << "Please enter a number? ";
    cin >> Number; 
    
    return Number;  
}


int main()
{
    float Number = ReadNumber();  // Read a number from the user.

    // Print the absolute value using the custom MyABS function.
    cout << "My abs Result : " << MyABS(Number) << endl;

    // Print the absolute value using the built-in abs function.
    cout << "C++ abs Result: " << abs(Number) << endl;

    return 0;  // Return 0 to indicate successful program execution.
}