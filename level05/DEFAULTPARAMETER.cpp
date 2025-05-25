#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     


#include "LibraryOrPackage/MyLib.h";


using namespace std ;




int MySum(int a, int b, int c = 0, int d = 0) {
return (a + b + c + d);
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";




  srand((unsigned)time(NULL)); 





cout << MySum(10, 20) << endl;
cout << MySum(10, 20, 30) << endl;
cout << MySum(10, 20, 30, 40) << endl;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}

