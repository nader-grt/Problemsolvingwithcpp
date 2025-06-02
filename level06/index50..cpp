#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>
#include <filesystem>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


  cout<<"======================================================================\n";
  cout<<"======================================================================\n";
  cout<<"=======================  1  ===============================================\n";

    //    string s1 = ""  ;
    //    cout<<"\n Enter your name : ";
    //    getline(cin,s1) ;
    //    cout<< "Welcome "<<s1 ;




  cout<<"======================================================================\n";
  cout<<"======================================================================\n";
  cout<<"=======================  2  ===============================================\n";

//  Count number of characters in a string
// string s2 =  "Programming";

//    cout<<s2.length() <<endl ;







  cout<<"======================================================================\n";
  cout<<"======================================================================\n";
  cout<<"========================     s3   ==============================================\n";

//  3. Print each character on a new line

// string s3 = "HI!" ;
// for (short i = 0; i < s3.length(); i++)
// {
//     cout<<s3[i]<<endl ;
// }





  cout<<"======================================================================\n";
  cout<<"======================================================================\n";
  cout<<"========================= s4  =============================================\n";


// Find if a substring exists
//   Task: Check if "love" is part of the string.

/*

string::npos means "not found".

.find() returns the index where the substring starts, or npos if not found.
*/

// string s4 = "I love C++ programming";

// if(s4.find("love") !=  string::npos)
// {
//     cout << "Substring found!";
// }else{
//     cout << "Substring NOT  found!";
// }






  cout<<"======================================================================\n";
  cout<<"======================================================================\n";
  cout<<"================================  s5  ======================================\n";


// string s5 = "The dog is cute";
// size_t pos = s5.find("dog");

// if (pos != string::npos) {
//     s5.replace(pos, 3, "cat"); // 3 = length of "dog"
// }

// cout << s5; // Output: The cat is cute





  cout<<"======================================================================\n";
  cout<<"======================================================================\n";
  cout<<"========================   s6==============================================\n";

string s6  = "My Name is Mohammed Abu-Hadhoud, I Love Programming." ;

   cout <<s6.length() <<endl ;
cout<<s6.at(3)  <<endl ;

cout<<s6.append(" @programing advice") <<endl ;

cout<<s6.substr(16,8) <<endl ;

s6.push_back('x')   ;
cout<<s6 <<endl ;
s6.pop_back()  ;

cout<<s6 <<endl ;
cout<<s6.insert(7," Ali ")  <<endl ;

cout<<s6.find("Ali")  <<endl ;

cout<<s6.find("ali") <<endl ;

if(s6.find("ali")  == s6.npos   )
cout<<"\n ali not found" ;





  cout<<"\n======================================================================\n";
  cout<<"======================================================================\n";
  cout<<"======================================================================\n";








  cout<<"======================================================================\n";
  cout<<"======================================================================\n";
  cout<<"======================================================================\n";



   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
