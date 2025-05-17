#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


void PrintHeaderTable()
{

  cout<<"\n \n \n \t \t \t \t Multiplication Table \t \t"<<endl ;
  cout<<"\n \n"<<endl ;
  for (int i = 1; i <= 10; i++)
  {
    cout<<"\t"<<i ;
  }
  cout<<"\n-----------------------------------------------------------------------------------------------------------------------------------------\n"  ;
  
}
string SpearetorComun(int Number)
{

  if(Number >=1  && Number<10)
  return "   |";
  if(Number >=10)
   return "  |";

}

void PrintMultiplicationTable()
{
          PrintHeaderTable()  ;
          for (int i = 1; i <=10; i++)
          {
            cout<<i<<SpearetorComun(i) ;
            for (int j = 1; j <=10; j++)
            {
             // cout<<"\t   "<<i *j <<"\t" ;
              // cout<<"\t"<<i * j;
                cout<<"\t"<<i *j;
            }
            cout<<endl ;
            
          }
          

}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Multiplication Table   c++ languages           ====\n"                              ;
   cout<<"======================================================================\n";

cout<<"\n \n \n"  ;

 PrintMultiplicationTable() ;

     cout<<"\n  \n \n \n \n \n \n \n \n \n \n \n \n \n" ;
    return 0;
}
