#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


void ReadArrayData(int arr[100] ,int &length)
{

    cout<<"How many number for entred for array "<<endl ;
    cin>>length ;

    for (int  i = 0; i < length; i++)
    {
        cout<<"The first number is [ "<<i +1 <<" ] ";
        cin>>arr[i] ;
    }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";


     cout<<"\n" ;
    return 0;
}
