#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


int  MySum(int a, int b)
{
int s = 0;
s = a + b;
return s;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function





int arr1[5] = { 200,100,50,25,30 };
int a, b, c;
a = 10;
b = 20;
a++;
++b;
c = a + b;
cout << a << endl;
cout << b << endl;
cout << c << endl;
for (int i = 1; i <= 5; i++)
{
cout << i << endl;
a = a + a * i;
}
c = MySum(a, b);














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}




















