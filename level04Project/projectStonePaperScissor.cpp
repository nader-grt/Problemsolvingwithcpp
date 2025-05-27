#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>   
#include <ctime>    
using namespace std ;

enum enChoicesWithComputer {  Stone =1 ,  Paper=2,   Scissor =3 }  ;

struct StPlayer {
string choicePlayer ;
int NumberChoicePlayer ;
int CountPlayerWin =0;

} ;

struct StComputer {
    string choiceComputer ;
    int NumberChoiceComputer ;
    int CountComputerWin =0 ;

} ;


struct StHowWinner {
  int CountEqualWithPlayerOrVomputer =0 ;
  string Winner ;
  int HowWinnerCountPlayer =0 ,HowWinnerCountComputer =0 ;

}  ;


struct StEachRoundResultOnce
{
string PlayerChoice;
string ComputerChoice;
string RoundWinner;
int CountEqualWithPlayerOrVomputer =0;
StHowWinner  HowWinner  ;
};


int ReadNumber(string message)
{
    int Number = 0 ;

     do
     {
       cout<<message<<endl ;
       cin>>Number ;
     } while (Number <= 0);
     
    return Number ;
}
int RandomNumber(int From,int To)
{
    return rand() % (To -From + 1 )  + From  ;
}

StComputer GetChoicesWithComputer(StComputer &Computer)
{
  //  string choiceComputer = ""  ;
       int choiceComputer = RandomNumber(1,3 ) ;
       switch (choiceComputer)
       {
       case enChoicesWithComputer::Stone :
       Computer.choiceComputer = "Stone"  ;
        Computer.NumberChoiceComputer =  enChoicesWithComputer::Stone ;
       break;
      case enChoicesWithComputer::Paper :
      Computer.choiceComputer = "Paper" ;
      Computer.NumberChoiceComputer = enChoicesWithComputer::Paper ;
        break; 
      case enChoicesWithComputer::Scissor :
       Computer.choiceComputer  = "Scissor" ;
        Computer.NumberChoiceComputer = enChoicesWithComputer::Scissor ;    
         break;
       default:
        break;
       }

       return Computer  ;
}

StEachRoundResultOnce  GetWinnerForEachRoundCoputerOrPlayer(StPlayer &Player ,StComputer &Computer , StEachRoundResultOnce &EachRoundResultOnce)
{
 // StHowWinner  HowWinner ;
        int CountHowWinnerCountPlayer = 0 ,CountHowWinnerCountComputer = 0 ,CountCountEqualWithPlayerOrVomputer =0 ;
  
       if(Player.NumberChoicePlayer > Computer.NumberChoiceComputer)
       {
   
        // return "Player" ;
        int count = 0 ;

         EachRoundResultOnce.HowWinner.Winner  = "Player"  ;
          CountHowWinnerCountPlayer++ ;
          count =  CountHowWinnerCountPlayer ;
         EachRoundResultOnce.HowWinner.HowWinnerCountPlayer = count ;
       }
      
       else if(Player.NumberChoicePlayer < Computer.NumberChoiceComputer)
       {
        
          int count = 0 ;

         EachRoundResultOnce.HowWinner.Winner  = "Computer" ;
         CountHowWinnerCountComputer++ ;
         count = CountHowWinnerCountComputer ;
        EachRoundResultOnce.HowWinner.HowWinnerCountComputer  = count ;
       }
       
        else
        {
             int count = 0 ;
            EachRoundResultOnce.HowWinner.Winner  = "No Winner" ;
            CountCountEqualWithPlayerOrVomputer++ ;
            count = CountCountEqualWithPlayerOrVomputer ;
             EachRoundResultOnce.HowWinner.CountEqualWithPlayerOrVomputer  =  count ;
        }

        return EachRoundResultOnce  ;
}
StPlayer GetChoicesWithPlayer(StPlayer &Player  )
{


    int ChoicePlayer  ;
    cout<<" \n Your Choice    Stone = [1] ,  Paper= [2] ,   Scissor =[3] ? " ;
   cin>>ChoicePlayer  ;

        switch (ChoicePlayer)
       {
       case enChoicesWithComputer::Stone :
       Player.choicePlayer = "Stone"  ;
        Player.NumberChoicePlayer =  enChoicesWithComputer::Stone ;
       break;
      case enChoicesWithComputer::Paper :
      Player.choicePlayer = "Paper" ;
      Player.NumberChoicePlayer = enChoicesWithComputer::Paper ;
        break; 
      case enChoicesWithComputer::Scissor :
       Player.choicePlayer  = "Scissor" ;
        Player.NumberChoicePlayer = enChoicesWithComputer::Scissor ;    
         break;
       default:
        break;
       }

       return Player  ;
}



StEachRoundResultOnce  GetEachRoundResultOnce(StPlayer &Player ,StComputer &Computer,  StEachRoundResultOnce &EachRoundResultOnce )
{
   //StHowWinner  HowWinner ;
   StEachRoundResultOnce EachRoundResultOnce1  ;

        EachRoundResultOnce1 = GetWinnerForEachRoundCoputerOrPlayer(Player,Computer ,EachRoundResultOnce)  ;
           EachRoundResultOnce.PlayerChoice = Player.choicePlayer ;
           EachRoundResultOnce.ComputerChoice = Computer.choiceComputer ;
        EachRoundResultOnce.RoundWinner   = EachRoundResultOnce1.HowWinner.Winner  ;
          EachRoundResultOnce1.HowWinner.HowWinnerCountPlayer  = Player.CountPlayerWin  ;
              EachRoundResultOnce1.HowWinner.HowWinnerCountComputer  =   Computer.CountComputerWin  ;
               EachRoundResultOnce1.HowWinner.CountEqualWithPlayerOrVomputer  =   EachRoundResultOnce.CountEqualWithPlayerOrVomputer  ;



       return   EachRoundResultOnce  ;
}

void GetRound( StEachRoundResultOnce &EachRoundResultOnce ,int countRound)
{


     cout<<"\n \n ==============================   Round  ["<< countRound +1 <<"]   ===============================================================\n \n"  ;

           cout<<"Player 1 choice  "<<EachRoundResultOnce.PlayerChoice <<endl ;
           cout<<"Computer choice "<<EachRoundResultOnce.ComputerChoice <<endl ;
           cout<<"Round Winner "<<EachRoundResultOnce.RoundWinner<<endl ;


 cout<<"\n ==============================================================================================\n \n \n "  ;
}


void GameOverEnd(StEachRoundResultOnce &EachRoundResultOnce,int Number)
{



cout<<"\n \n \n \n \n " ;
   cout<<"======================================================================\n";
   cout<<"===                       Game   Over                             ====\n"                              ;
   cout<<"======================================================================\n";
cout<<"\n \n " ;


 cout<<"\n \n ==============================   Game Result    ===============================================================\n \n"  ;


 cout<<"\n  Game Round               \t"<<Number<<endl ;
 cout<<"\n  Player win time (s )     \t"<<EachRoundResultOnce.HowWinner.HowWinnerCountPlayer<<endl ;
 cout<<"\n  Computer  win time (s )  \t"<<EachRoundResultOnce.HowWinner.HowWinnerCountComputer<<endl ;
 cout<<"\n  Equal Result no win (s ) \t"<<EachRoundResultOnce.CountEqualWithPlayerOrVomputer<<endl ;



}

void  StartPlayer(int roundCount )
{
     StPlayer Player  ;

        StComputer Computer ;
          StEachRoundResultOnce EachRoundResultOnce ;
            StHowWinner  HowWinner ;
  
   cout << " Round [" << roundCount +1 << "] Begins : "<<endl ;
   cout<<"\n  " ;

   Player =  GetChoicesWithPlayer(Player)  ;
     Computer=     GetChoicesWithComputer(Computer)  ;

  EachRoundResultOnce =    GetEachRoundResultOnce(Player , Computer,   EachRoundResultOnce)  ;

  GetRound(EachRoundResultOnce ,roundCount)  ;

 //GameOverEnd(Number)  ;
}



void GoPlay(int Number)
{
    StPlayer Player  ;

StComputer Computer ;
StEachRoundResultOnce EachRoundResultOnce ;
 StHowWinner  HowWinner ;
  EachRoundResultOnce =    GetEachRoundResultOnce(Player , Computer,   EachRoundResultOnce)  ;
//cout<<"\n \n "<<EachRoundResultOnce.CountEqualWithPlayerOrVomputer <<"\n"  ;
   for (int i = 0; i < Number; i++)
   {
        StartPlayer(i ) ;

        if((Number - i) == 1)
         GameOverEnd(EachRoundResultOnce,Number)  ;
   }
   

}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===    project  Stone  Paper   Scissor  c++ languages             ====\n"                              ;
   cout<<"======================================================================\n";
StPlayer Player  ;

StComputer Computer ;

  srand((unsigned)time(NULL));

  

GoPlay( ReadNumber("\n HOw many round 1 TO 10 ?"))  ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
