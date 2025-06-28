#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>
#include <filesystem>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 

 | الهدف       | العملية           | المعنى             |
| ----------- | ----------------- | ------------------ |
| **الآحاد**  | `n % 10`          | آخر رقم على اليمين |
| **العشرات** | `(n / 10) % 10`   | ثاني رقم من اليمين |
| **المئات**  | `(n / 100) % 10`  | ثالث رقم من اليمين |
| **الآلاف**  | `(n / 1000) % 10` | رابع رقم من اليمين |

 * 
 
 */

string ConvertNumberToText(int Number)
{
                  

                        if (Number == 0)  
                          {
                                return""; 
                          } 
                      
                          if (Number >= 1 && Number <= 19)  
                         { 
                          
                              string arr[] = { "", "One","Two","Three","Four","Five","Six","Seven", 
                                            "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen", "Fifteen",
                                               "Sixteen","Seventeen","Eighteen","Nineteen" }; 

                                 return  arr[Number] + " ";  

                          } 
                         
                         
                          if (Number >= 20 && Number <= 99)  
                          { 
                             
                              string arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" }; 
                         
                         
                                      return  arr[Number / 10] + " " + ConvertNumberToText(Number % 10);  
                          } 


                          if (Number >= 100 && Number <= 199) 
                          {
                          
                              return"One Hundred " + ConvertNumberToText(Number % 100);

                          } 
                     
                      
                          if (Number >= 200 && Number <= 999)  
                          {

                            return   ConvertNumberToText(Number / 100) + "Hundreds " + ConvertNumberToText(Number % 100); 
                          }

                          if (Number >= 1000 && Number <= 1999) 
                          {
                               
                                return"One Thousand " + ConvertNumberToText(Number % 1000); 
                          }


                          if (Number >= 2000 && Number <= 999999) 
                          {
                                  
                           return   ConvertNumberToText(Number / 1000) + "Thousands " + ConvertNumberToText(Number % 1000); 
                                   
                          }
                                        
                                 
                          if (Number >= 1000000 && Number <= 1999999)  
                          {
                                      
                             return"One Million " + ConvertNumberToText(Number % 1000000);  
                                  
                          } 
                                     
                          if (Number >= 2000000 && Number <= 999999999)  
                          { 
                                      

                             return   ConvertNumberToText(Number / 1000000) + "Millions " + ConvertNumberToText(Number % 1000000);  
                                      
                          } 
                                 

                          if (Number >= 1000000000 && Number <= 1999999999)  
                          { 
                                      
                             return"One Billion " + ConvertNumberToText(Number % 1000000000); 


                          }else  
                          {
                                          
                             return   ConvertNumberToText(Number / 1000000000) + "Billions " + ConvertNumberToText(Number % 1000000000); 
                          } 
     
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


              int  Number = MyLib::ReadNumber("\n Enter a Number? ") ;

               cout<<ConvertNumberToText(Number)  ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
