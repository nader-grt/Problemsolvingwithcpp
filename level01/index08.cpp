#include <iostream>

using namespace std ;

//PROLEM OF THREE NUMBERS 
void SumOfThreeNumbers(){

    int num =0 ,sum = 0, count=0;

     do{
        cout<< "Enter number between 1 to 3";
       
     cin>> count;
    cin>>num ;
     sum +=num ;
       count++;
     }while(count<=3);
     cout<<"The result is "<<sum ;

}
int main() {


 SumOfThreeNumbers() ;
cout<<"\n" ;
    return 0;
}
