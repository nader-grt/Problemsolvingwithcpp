#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
  /**
   * 
   *      Number <To
   */
int ReadIntInRangeNumber(int From ,int To)
{
    int Number = 0 ;
    do
    {
      cout<<"Enter Number between "<<From <<" And "<<To  <<endl ;
      cin>>Number ; 
    } while ( Number < From  ||  Number > To);
    return Number
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                RangInNumber between From and To using c++     ====\n"                              ;
   cout<<"======================================================================\n";


     cout<<"\n" ;
    return 0;
}
