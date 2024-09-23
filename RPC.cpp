#include <iostream>

using namespace std;
char showWinner(char player1,char  player2);


class Player {

    public:

        int player;
        string sign;

        Player(int numplayer, string signplayer){

            player = numplayer;
            sign = signplayer;
        }

        int get_player(){

            return player;
        }

};

int main(){

    string player1;
    string player2;

    

          int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int numplayer;
        string signplayer;
        cin >> numplayer >> signplayer ; 

        

        
        

        

        
    }
    for (i)

    
    
    return 0;
}

char showWinner(char player1, char player2){

        switch(player1){
            case 'r' : if(player2 == 'r'){

                        return 'r';
                        
                        }
                        else if(player2 == 'p'){
                        return player2;

                        }

                        else if(player2 == 'l'){
                        return player1;

                        }
                        else if(player2 == 's'){
                        return player2;

                        }
                        else {

                        return player1;
                        }
                        break;

            case 'p' : if(player2 == 'r'){

                        return player1;
                        
                        }
                        else if(player2 == 'p'){
                        return 'p';

                        }

                        else if(player2 == 'l'){
                        return player2;

                        }
                        else if(player2 == 's'){
                        return player1;

                        }
                        else {

                        return player1;
                        }
                        break;
            case 'c' : if(player2 == 'r'){

                        return player2;
                        
                        }
                        else if(player2 == 'p'){
                        return player1;

                        }

                        else if(player2 == 'l'){
                        return player1;

                        }
                        else if(player2 == 's'){
                        return player2;

                        }
                        else {

                        return 'c';
                        }
                        break;


             case 'l' : if(player2 == 'r'){

                        return player2;
                        
                        }
                        else if(player2 == 'p'){
                        return player1;

                        }

                        else if(player2 == 'l'){
                        return 'l';

                        }
                        else if(player2 == 's'){
                        return player1;

                        }
                        else {

                        return player2;
                        }
                        break;


            case 's' : if(player2 == 'r'){

                        return player1;
                        
                        }
                        else if(player2 == 'p'){
                        return player2;

                        }

                        else if(player2 == 'l'){
                        return player2;

                        }
                        else if(player2 == 's'){
                        return 's';

                        }
                        else {

                        return player1;
                        }
                        break;

        }
     
}