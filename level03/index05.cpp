#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
  struct StInfo {
    int Age ;
    bool HasDriverLicense ;
    bool HasRecommandation ;
  } ;

  StInfo  ReadInfo()
  {
          StInfo  Info  ;
          cout<< " \n PLZ Enter your Age? " <<endl ;
          cin>> Info.Age  :
          cout<<" \n Do You have license DFriver? " <<endl ;
          cin >>Info.HasDriverLicense  ;
          cout<<" \n "<<endl ;
          cin>>Info.HasRecommandation  ;

          return Info  ;
  }

  bool IsAccepted(StInfo Info)
  {
    if(Info.HasRecommandation)
    {
        return true ;
    }else 
    {
        return  (Info.Age > 21  && Info.HasDriverLicense) ;
    }
  }


  void PrintResult(StInfo Info)
  {
    if(IsAccepted(Info))
    {
     cout<<"\n Hired "<<endl ;
    }else
    {
        cout<<"\n Rejected "<<endl ;
    }
  }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
PrintResult(ReadInfo())  ;

     cout<<"\n" ;
    return 0;
}
