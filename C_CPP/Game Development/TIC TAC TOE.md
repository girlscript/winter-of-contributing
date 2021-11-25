# TIC TAC TOE GAME IN C++

**Definition:-**  
*Tic Tac Toe* is one of the most easiest and popular game all around the world. It's a two player game.

**Rules:-**  
* Tic Tac Toe is a 2 player game, either a single player can play with Computer or two players can play with each other.
* There are two signs in this game, **Cross(X)** and **Circle(O)**. Each player have to choose one of these signs to play the game.
* There are 9 spaces to place the signs. no two players can place their sign in same space.
* A player is declared winner if he/she can match his/her sign 3 times in either vertically or horizantally or diagonally.
* If both of the players are unable to match the signs of their own, the game is declared a **Draw Game**.

**C++ Code:-**  
Here is the C++ code for this amazing game  
```cpp
#include <iostream>
#include<list>
#include <cstdlib>
#include<string>
#include <ctime>
using namespace std;
 
typedef struct{
    int *row;
}WinList;
 
class Player {
private:
    string name;
    int score;
public:
    Player() :Player {""}{}
    Player(string n) :score{0}, name{n}{}
 
    void won(){
        //increment the score
        score++;
    }
    int getScore(){ return this->score;}
    string getName(){ return this->name;}
};
 
class Game {
private:
    char board[9];
    int emptyIndex[9];
    int gameOn, againstComputer;
    int emptyCount;
    WinList winlist[8];
 
    // Displaying the initial board
    void displayBoard(){
        cout <<endl;
        cout << "   |   |   "<<endl;
        cout << " "<< board[0] <<" | "<<board[1]<<" | "<<board[2]<<endl;
        cout << "   |   |   "<<endl;
        cout << "-----------"<<endl;
        cout << "   |   |   "<<endl;
        cout << " "<< board[3] <<" | "<<board[4]<<" | "<<board[5]<<endl;
        cout << "   |   |   "<<endl;
        cout << "-----------"<<endl;
        cout << "   |   |   "<<endl;
        cout << " "<< board[6] <<" | "<<board[7]<<" | "<<board[8]<<endl;
        cout << "   |   |   "<<endl;
        cout <<endl;
    }
    
    // Creating Computer Input For One-player Mode
    void computerInput(){
        int pos;
        pos = rand()%10;
        if(emptyIndex[pos] == 1){
            if(emptyCount < 0)
                return;
            computerInput();
        } else {
            cout<< "Computer choose: " << pos+1 << endl;
            emptyIndex[pos] =1;
            emptyCount-=1;
            board[pos] = 'O';
        }
 
    }
 
    //Taking Player Input from User
    void playerInput(Player &player){
        int pos;
        cout << endl;
        cout << "\t" << player.getName() <<" Turn: ";
        cout <<"\t Enter the position " << endl;
        cin >> pos;
        pos -=1;
        if(emptyIndex[pos] == 1){
            cout << "-----Position not empty-------"<< endl;
            playerInput(player);
        } else {
            emptyIndex[pos] =1;
            emptyCount-=1;
            player.getName().compare("Player I") == 0 ? board[pos] ='X': board[pos] ='O';
        }
 
    }
    
    // Checking if any player won or not after every input
    void checkWin(Player &p1,Player &p2){
        int i,j,k;
        bool flag = false;
        char first_symbol;
        for(i=0; i<8; i++){
            first_symbol = board[winlist[i].row[0]];
 
            if((first_symbol != 'X') && (first_symbol != 'O')){
                flag = false;
                continue;
            }
            flag = true;
            for(j=0;j<3;j++){
                if(first_symbol != board[winlist[i].row[j]]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                gameOn = 0;
                if(first_symbol == 'X'){
                    cout << "-----------------------"<< endl;
                    cout << "\t Player I WON"<< endl;
                    cout << "-----------------------"<< endl;
                    p1.won();
                } else {
                    p2.won();
                    if(againstComputer){
                        cout << "-----------------------"<< endl;
                        cout << "\t Computer WON"<< endl;
                        cout << "-----------------------"<< endl;
                    } else {
                        cout << "-----------------------"<< endl;
                        cout << "\t Player II WON"<< endl;
                        cout << "-----------------------"<< endl;
 
                    }
                }
                displayScore(p1,p2);
                break;
            }
        }
    }
 
        //  Function for playing
        void play(Player &p1,Player &p2){
            char rematch ='\0';
            int hand = 0;
            gameOn =1;
            displayBoard();
            while((emptyCount > 0) && (gameOn != 0)){
 
                if(againstComputer)
                    hand == 1 ? computerInput(): playerInput(p2);
                else
                    hand == 1 ? playerInput(p1): playerInput(p2);
                hand= !hand;
                displayBoard();
                checkWin(p1,p2);
            }
            if (emptyCount <=0){
                cout << "      -----------------------"<< endl;
                cout << "\t No WINNER"<< endl;
                cout << "      -----------------------"<< endl;
            }
            cout<< endl;
            cout << "Rematch Y/N: ";
            cin >> rematch;
            if((rematch == 'Y')||(rematch == 'y')){
                init();
                play(p1,p2);
            }
 
        }
        
    // Displaying the score of both players
    void displayScore(Player &p1, Player &p2){
        cout << endl;
        cout << "\t SCORE: \t";
        if(againstComputer)
            cout<<" Player I: " <<p1.getScore()<<" \t Computer: "<<p2.getScore()<< endl;
        else
            cout<<" Player I: " <<p1.getScore()<<" \t Player II: "<<p2.getScore()<< endl;
    }
 
public:
    Game(): emptyCount{0}, gameOn{1}, againstComputer{0}{
        init();
        winlist[0].row = new int[3]{0,1,2};
        winlist[1].row = new int[3]{3,4,5};
        winlist[2].row = new int[3]{6,7,8};
        winlist[3].row = new int[3]{0,3,6};
        winlist[4].row = new int[3]{1,4,7};
        winlist[5].row = new int[3]{2,5,8};
        winlist[6].row = new int[3]{0,4,8};
        winlist[7].row = new int[3]{2,4,6};
    }
 
    void init(){
        gameOn = 1;
        emptyCount =0;
        srand(time(0));
        for(size_t i=0; i<10; i++){
            emptyIndex[i] = 0;
            board[i] = (i+1) +'0';
            emptyCount++;
        }
        emptyCount--;
    }
 
    void onePlayerGame(){
        //Creating Player
        Player p("Player I");
        Player c("Computer");
        cout << "       -----------------------"<< endl;
        cout << "\t Player I: X \t Computer: O"<< endl;
        cout << "       -----------------------"<< endl;
        cout << endl;
        againstComputer = 1;
        play(c,p);
    }
 
    void twoPlayerGame(){
        //Creating Player
        Player p("Player I");
        Player c("Player II");
        cout << "       -----------------------"<< endl;
        cout << "\t Player I: X \t Player II: O"<< endl;
        cout << "       -----------------------"<< endl;
        cout << endl;
        againstComputer = 0;
        play(c,p);
    }
};
 
int main()
{
    int ch;
    while(1){
        cout<< "      ----------MENU----------" << endl;
        cout << "\t 1. 1 Player game" <<endl;
        cout << "\t 2. 2 Player game" <<endl;
        cout << "\t 3. To exit " <<endl;
        cout <<"      ------------------------" << endl;
        cout << endl;
        cout <<"\t Select an option" << endl;
        cin >> ch;
        switch(ch){
        case 1:{
            Game *game = new Game;
            game->init();
            game->onePlayerGame();
            }
            break;
        case 2:{
            Game *game = new Game;
            game->init();
            game->twoPlayerGame();
            }
            break;
        case 3:
            return 0;
        default:
            cout << "OOPS!!!!Invalid Option! TRY AGAIN";
        }
    }
    return 0;
}
```  
  
**Output:-**  

https://user-images.githubusercontent.com/63858941/138689452-9bb5989d-6ccf-43fe-b049-affd02cf30b7.mp4
