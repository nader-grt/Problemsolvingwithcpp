#include <iostream>

using namespace std ;

int PrintAverageMarks(int mark1,int mark2,int mark3)
{
    int avg = 0;
    avg=   ( mark1 + mark2 + mark3)/3 ;
    return  avg ;
}
int main() {
   
    int result = PrintAverageMarks(50,0,50) ;
    cout<<"The result of average is "<<result<<endl ;
    if(result >=50)cout<<"PASS"<<endl;
    else
    cout<<"FAIL"<<endl ;
    return 0;
}
