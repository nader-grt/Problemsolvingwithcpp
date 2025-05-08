#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
enum enScreenColor { Red=1, Blue=2, Green=3, Yellow=4 };
enum enCountryName {Tunisia =1 , Jordan =2 ,Egypt ,3 ,Palesstine=4 ,Oman=5,Yemen,6,other =7} ;

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===    Training enum how read from variable  enum  App            ====\n"                              ;
   cout<<"======================================================================\n";

cout<<"\n \n \n \n"  ;

  cout << "****************************\n";
    cout << "Please Chose the number of your color?\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";
  int c ;
  cin>>c ;
 enScreenColor  Color ;
 Color  = (enScreenColor)  c ;
 if (Color == enScreenColor::Blue) {
        cout << "\033[34m"; // Blue
    } else if (Color == enScreenColor::Green) {
        cout << "\033[32m"; // Green
    } else if (Color == enScreenColor::Red) {
        cout << "\033[31m"; // Red
    } else if (Color == enScreenColor::Yellow) {
        cout << "\033[33m"; // Yellow
    } else {
        cout << "\033[0m"; // Reset
    }

 cout << "****************************\n";
    cout << "Please Enter the number of your country?\n";
    cout << "(1) Jordan\n";
    cout << "(2) Tunisa\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq\n";
    cout << "(7) Other\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";







     cout<<"\n" ;
    return 0;
}
