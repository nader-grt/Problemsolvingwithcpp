#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

#include "../level05/LibraryOrPackage/MyLib.h"

using namespace std;

enum enDirection { Top = 1, Down = 2, Left = 3, Right = 4 };
enum enCharacterType {CapitalLetter =1 , Digit =2} ;


struct StMap {
    int width = 130;
    int height = 70;
    int fruitX;
    int fruitY;
};

struct StSnake {
    int headX;
    int headY;
    int tailLength;
    enDirection Dir ; // Default direction
};

struct stPlayer {
    int nbtPoints = 0;
    bool IsWinner = false;
    int PlayerScore = 0 ;
};

struct StPosition {

    int PositionX ;
    int PositionY ;
};




void GenearateSnake(stPlayer &Player)
{
    for (int  i = 0; i <= Player.PlayerScore; i++)
    {
           cout<<"O" ;
    }
    

}




// Set terminal to non-blocking, non-canonical mode
void setNonBlockingInput(bool enable) {
    static struct termios oldt, newt;

    if (enable) {
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);
    } else {
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
        fcntl(STDIN_FILENO, F_SETFL, 0);
    }
}

void TakeCharacterFromUser(StSnake &Snake) {
    char ch;
    setNonBlockingInput(true);

    ch = getchar();
    if (ch != EOF) {
        switch (ch) {
            case 's': Snake.Dir = Top; break;
            case 'w': Snake.Dir = Down; break;
            case 'q': Snake.Dir = Left; break;
            case 'd': Snake.Dir = Right; break;
        }
    }
    usleep(10000);
    setNonBlockingInput(false);
}

int GenerateFruitX(StMap &Map, int XWidthOrigin = 2) {
    return MyLib::RandomNumber(XWidthOrigin, Map.width - 2);
}



int GenerateFruitY(StMap &Map, int YHeightOrigin = 2) {
    return MyLib::RandomNumber(YHeightOrigin, Map.height - 2);
}



void GenerateInitializeFruits(StMap &Map)
{

          Map.fruitX = GenerateFruitX(Map);
    Map.fruitY = GenerateFruitY(Map);
}
StSnake InitializeSnake(StMap &Map) {
    StSnake Snake;
    Snake.headX = Map.width / 2;
    Snake.headY = Map.height / 2;
    Snake.tailLength = 0;
    return Snake;
}

void DrawGame(StMap &Map, StSnake &Snake ,stPlayer &Player ,StPosition &Position) {
    system("clear");

    for (int y = 0; y < Map.height; y++) {
        for (int x = 0; x < Map.width; x++) {
            if (y == 0 || y == Map.height - 1 || x == 0 || x == Map.width - 1) {
                cout << "*";
            } else if (x == Map.fruitX && y == Map.fruitY) {
              //  cout << "$";
                cout << "\033[32m$\033[0m";
            } else if (x == Snake.headX && y == Snake.headY) {
                //cout << "O";
                 GenearateSnake(Player) ;
                Position.PositionX = x ;
                Position.PositionY = y ;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout<<"\n \n Your Score is: "<<Player.PlayerScore <<endl ;
}

void MoveSnake(StSnake &Snake ,StMap &Map ,stPlayer &Player ,StPosition &Position) {
    switch (Snake.Dir) {
        case Top:    Snake.headY--; break;
        case Down:   Snake.headY++; break;
        case Left:   Snake.headX--; break;
        case Right:  Snake.headX++; break;
    }
    if(Snake.headY >= Map.height  || Snake.headY <=0  || Snake.headX>= Map.width  || Snake.headX >= 0)
    Player.IsWinner = false ;
  
     if((Snake.headY == Map.fruitY)  &&   (Snake.headX ==  Map.fruitX )  )
     {
        GenerateInitializeFruits(Map)  ;
        Player.PlayerScore += 1 ;
     
     }
     if( ( Position.PositionX == Snake.headX && Position.PositionY == Snake.headY) )  
     {
        cout << "\a";
          GenearateSnake(Player) ;
     }
}

void setUp(StMap &Map, StSnake &Snake ,stPlayer &Player ,StPosition &Position) {
    DrawGame(Map, Snake,Player ,Position);
}


void StartGame() {
    StMap Map;
    StSnake Snake = InitializeSnake(Map);
    stPlayer Player;
StPosition  Position ;
    Map.fruitX = GenerateFruitX(Map);
    Map.fruitY = GenerateFruitY(Map);

    while (!Player.IsWinner) {
        setUp(Map, Snake ,Player,Position);
        TakeCharacterFromUser(Snake);
        MoveSnake(Snake ,Map ,Player ,Position);
        
           usleep(400000);
    }
}

int main() {
    cout << "======================================================================\n";
    cout << "===                Training using C++ language App                ===\n";
    cout << "======================================================================\n\n";

    srand((unsigned)time(NULL));

    StartGame();

    cout << "\n\nGame Over\n";
    return 0;
}
