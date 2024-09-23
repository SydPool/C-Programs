#include <iostream>
#include <conio.h>

char getPlayerOne();
char getPlayerTwo();
void showChoice(char choice);
void showWinner(char playerOne, char playerTwo);




int main(){


    char playerOne = getPlayerOne();
    std::cout << "Player One Choice is ***\n";
    std::cout << "\n";
    



    char playerTwo = getPlayerTwo();
    std::cout<< "Player Two choice is ***\n";
    std::cout << "\n";
    

    showWinner(playerOne, playerTwo);

    showChoice(playerOne);
    showChoice(playerTwo);


    return 0;

}

char getPlayerOne(){

    char choice;

    std::cout << "************************************\n";

    do{

    
    std::cout << "*********ROCK-SCISSOR-PAPER*********\n";
    
    std::cout << "r is rock\n";
    std::cout << "p is paper\n";
    std::cout << "s is scissor\n";
    std::cout << "Player one : Choose Either r, p or s\n";

    choice = _getch();

    }while(choice!= 'r' && choice!= 'p' && choice!= 's');

    

    return choice;

    

}
char getPlayerTwo(){

     char choice;

    

    do{

    
    std::cout << "////////////////////////////////////\n";
    std::cout << "Player two : Choose Either r, p or s\n";
    
    choice = _getch();

    }while(choice!='r' && choice!='p' && choice!='s');

    return choice;

}
void showChoice(char choice){

    

            
 


}

void showWinner(char playerOne, char playerTwo)
{


        if (playerOne == 'r'){
                    switch(playerTwo){

                            case 'r' : 
                            
                            std::cout << "Its a tie";

                            break;

                            case 'p' : 
                            
                            std::cout << "Player two won";

                            break;

                            case 's': 
                            
                            std::cout << "Player one Won";

                            break;
                    }
                    }

        else if (playerOne == 'p'){
                    switch(playerTwo){
                            case 'r' : 
                            
                            std::cout << "Player One won";

                            break;

                            case 'p' : 
                            
                            std::cout << "Its a tie";

                            break;

                            case 's' : 
                            
                            std::cout << "Player two Won";

                            break;
                    }
        }

        else if(playerOne == 's'){
                    switch(playerTwo){
                            case 'r' : 
                            
                            std::cout << "Player Two won";

                            break;

                            case 'p' : 
                            
                            std::cout << "Player one Won";

                            break;

                            case 's' : 
                            
                            std::cout << "Its a tie";

                            break;
                    }
                        
                    
                    
                    
                        



                    

        }


        }

