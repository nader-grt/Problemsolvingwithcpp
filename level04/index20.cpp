#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


// Function: RandomNumber
// Purpose: Generates a random integer between the specified range [From, To].
// Parameters:
//    From - the lower bound of the range.
//    To   - the upper bound of the range.
// Returns: A random integer between From and To (inclusive).
int RandomNumber(int From, int To)
{
    // Generate a random number between 0 and (To - From) using rand(),
    // then add From to shift the range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

    // Seed the random number generator with the current time.
    // This ensures that we get a different sequence of random numbers on each run.
    srand((unsigned)time(NULL));

  // Call RandomNumber three times to generate random numbers between 1 and 10,
    // and output each number on a new line.
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
