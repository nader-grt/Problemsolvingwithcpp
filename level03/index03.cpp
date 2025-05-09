#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

  struct StInfo{
    int Age ;
    bool HasDriverLicense ;
    
  } ;

  StInfo  ReadInfo() 
  {
      StInfo  Info ;
      cout<<" \n PLZ Enter your Age? ";
      cin>>Info.Age  ;
       cout<<" \n Do you have an Driver License? ";
      cin>>Info.Age  ;

      return Info   ;

  }

  bool IsAccepted(StInfo Info)
  {

    return  (Info.Age > 21  && Info.HasDriverLicense )   ;
  }

void PrintResult(StInfo Info)
{

   if(   IsAccepted(Info))
   {
    cout <<" \n Hired" <<endl  ;
   }else
    cout <<" \n Rejected" <<endl  ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              problem licennse driver License                  ====\n"                              ;
   cout<<"======================================================================\n";

PrintResult(ReadInfo())  ;
     cout<<"\n" ;
    return 0;
}
