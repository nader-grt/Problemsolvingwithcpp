#include <iostream>

using namespace std ;
//Average of three Mark 

int PrintAverageMarks(int mark1,int mark2,int mark3)
{
    int avg = 0;
    avg=   ( mark1 + mark2 + mark3)/3 ;
    return  avg ;
}
int main() {
    int result = PrintAverageMarks(50,50,50) ;
    cout<<"The result of average is "<<result ;

     cout<<"\n" ;
    return 0;
}
