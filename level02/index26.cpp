#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

/**
 * Uppercase A–Z:
A = 65 → Z = 90

Lowercase a–z:
a = 97 → z = 122
 * 
 */
string word;
bool ReadWordIsAlphabetic(string message )
{
    bool isAlphabitic = true ;;
    int count = 0 ;
   
      cout << message << endl;
    getline(cin, word); 
      
while (word.length() > count)
{
  if(!((int(word[count]) >=65  && int(word[count]) <=90) || (int(word[count]) >=97  && int(word[count]) <=122)))
  {
    isAlphabitic = false ;
    break;
  }
  count++ ;
}

  return isAlphabitic ;
}

bool CheckIsRangeAlphabetic()
 {


 bool IsAlphabetic = ReadWordIsAlphabetic("Enter the message for check is charachters from a to z and A to Z !") ;




while (!IsAlphabetic)
{
    cout << " Wrong Word. ";
     IsAlphabetic = ReadWordIsAlphabetic(" Please enter again charachters from a to z and A to Z without using any charckters like % @ and more ") ;
}
   return IsAlphabetic  ;
    
 }
bool PalidromWord(bool IsInRangeAlphabetic)
{
    bool isPalindrom = true ;
    for (int i = 0; i < word.length() /2 ; i++)
    {
       if( word[i] !=  word[word.length() -1 -i])
       {
        isPalindrom = false ;
        break;
       }
    }
    
    return isPalindrom  ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===       palindrom string meaning like madam  using c++          ====\n"                              ;
   cout<<"======================================================================\n";
// bool IsAlphabetic = ReadWordIsAlphabetic("Enter the message for check is charachters from a to and A to Z !") ;
//   if (!IsAlphabetic)
//     {
//         cout << "The input contains non-alphabetic characters.\n";
//     }
//     else
//     {
//         bool isPal = PalidromWord(IsAlphabetic);
//         if (isPal)
//             cout << "Yes, it's a palindrome!\n";
//         else
//             cout << "No, it's not a palindrome.\n";
//     }
     


     bool IsInRangeAlphabetic =  CheckIsRangeAlphabetic() ;
      bool isPalindrom    =  PalidromWord(IsInRangeAlphabetic) ;
     if (isPalindrom && IsInRangeAlphabetic)
            cout << "Yes, it's a palindrome!\n";
        else
            cout << "No, it's not a palindrome.\n";
     cout<<"\n \n \n" ;
    return 0;
}
