#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>   
#include <ctime>     
using namespace std ;


// Function: RandomNumber
// Purpose: Generates a random integer between two specified values, inclusive.
// Parameters:
//    From - The lower bound of the desired random range.
//    To   - The upper bound of the desired random range.
// Returns: A random integer between From and To (inclusive).
int RandomNumber(int From, int To)
{
    // Calculate a random number in the range [From, To]:
    // rand() % (To - From + 1) gives a value between 0 and (To - From),
    // then adding From shifts this range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
}

// Enumeration: enCharType
// Purpose: Defines different character types for random character generation.
enum enCharType { 
    SamallLetter = 1,    // Represents lowercase letters (ASCII 97 to 122).
    CapitalLetter = 2,   // Represents uppercase letters (ASCII 65 to 90).
    SpecialCharacter = 3,// Represents special characters (ASCII 33 to 47).
    Digit = 4            // Represents digits (ASCII 48 to 57).
};


char GetRandomCharacter(enCharType CharType)
{
    // Use a switch-case to handle the different character types.
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
        // Generate a random lowercase letter (ASCII codes 97 to 122).
        return char(RandomNumber(97, 122));
        break;  // break is not strictly needed after a return.
    }
    case enCharType::CapitalLetter:
    {
        // Generate a random uppercase letter (ASCII codes 65 to 90).
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
        // Generate a random special character (ASCII codes 33 to 47).
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        // Generate a random digit (ASCII codes 48 to 57).
        return char(RandomNumber(48, 57));
        break;
    }
    }
    // If an invalid type is passed, return a null character.
    return '\0';
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

    srand((unsigned)time(NULL));


    // Seed the random number generator with the current time.
    // This ensures that the sequence of random numbers is different on each run.
  

    // Generate and print one random character for each character type.
    cout << GetRandomCharacter(enCharType::SamallLetter) << endl;      // Random lowercase letter.
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;     // Random uppercase letter.
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;  // Random special character.
    cout << GetRandomCharacter(enCharType::Digit) << endl; 

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
