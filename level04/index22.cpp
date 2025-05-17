#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;

enum enCharType {
    CapitalLetter = 1 
} ;
int  ReadNumberPositive(string message)
{
    int Number = 0 ;
      do
      {
        cout<<message<<endl ;
        cin>>Number ;
      } while (Number <0);
      
    return Number ;
}
int RandomNumber(int From ,int To)
{
          return rand() % (To -From + 1)  + From ;
}


string GenerateWord()
{
    string word = ""  ;
   for (int i = 1; i <=4; i++)
   {
    word += char(RandomNumber(65,90))  ;
   }
   
    return word ;

}


void GenerateKey(int Number)
{
    string Key = "" ;
    for (int i = 0; i < Number; i++)
    {
      //  cout<<GenerateWord() <<endl ;
        Key +=   GenerateWord()  + "-" ;
        Key +=   GenerateWord()  + "-" ;
        Key +=   GenerateWord()  + "-" ;
        Key +=   GenerateWord()  ;


        cout<<" Key "<<" [ "<<i+1 <<" ] "<<Key <<endl ; 
        Key = "" ;
    }
    
}



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
  srand((unsigned)time(NULL));

GenerateKey(ReadNumberPositive("\n Enter a number? "))  ;
   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
