#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;

// Function: ReadNumber
// Purpose: Prompts the user to enter a number and returns the entered number.
// Returns: The number entered by the user.
int ReadNumber()
{
    int Number;  // Variable to store the user's input.
    cout << "\nPlease enter a number? ";
    cin >> Number;  // Read the number from the user.
    return Number;  // Return the entered number.
}

void AddElementToArray(int Number ,int arr[100] ,int &length)
{

    length++ ;
    arr[length - 1]  = Number ;
}
void AddUserInputMore(int arr[100] ,int &length)
{
    bool AddMore = true  ;

    do
    {
        AddElementToArray(ReadNumber(),arr,length) ;
           // Ask the user if they want to add more numbers.
        // Input 0 for No, 1 for Yes.
        cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
        cin >> AddMore;  
       
    } while (AddMore);
    
}





// Function: PrintArray
// Purpose: Prints all the elements of an array separated by spaces.
// Parameters:
//   - arr: The array to print.
//   - arrLength: The number of elements in the array.
void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  // Print a newline at the end.
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function

int arr[100] ,length = 0 ;

AddUserInputMore(arr,length)  ;
 cout << "\nArray Length: " << length << endl;
    cout << "Array elements: ";

PrintArray(arr,length)  ;
   cout<<"\n \n \n \n \n \n \n \n \n \n " ;
  
     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
