#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);
    
    

    showWinner(player, computer);


    return 0;
}

char getUserChoice(){

    char player;
    
    std::cout << "Rock-Scissor-Paper Game\n"; 

    do{

    std::cout << "****************************\n";
    std::cout << "Choose one of the following\n";  
    std::cout << "r for rock\n";
    std::cout << "p for paper\n";
    std::cout << "s for scissor\n";
    std::cout << "****************************\n";
    std::cin >> player;

    
    }while(player != 'r' && player!= 'p' && player!= 's');
        return player;

}
char getComputerChoice(){

        srand(time(NULL));
        int a = (rand()%3 )+1;

        switch(a){
            case 1 : return 'r';
            case 2 : return 'p';
            case 3 : return 's';
        }


        return 0;
}
void showChoice(char choice){
      
     switch (choice)
     {
     case 'r' :
        std::cout << "rock\n";
        break;

    case 'p' :
        std::cout << "paper\n";
        break;

    case 's' :
        std::cout << "scissor\n";
        break;
     
     }


}
void showWinner(char player, char computer){

        switch(player){
            case 'r' : if(computer == 'r'){

                        std::cout << "Its a tie!";
                        
                        }
                        else if(computer == 'p'){
                        std::cout << "Fock OFF LOOSER!!";

                        }
                        else {

                        std::cout << "GodDAMn My boy, You Fockin' Won";
                        }
                        break;

            case 'p' : if(computer == 'r'){

                        std::cout << "GodDAMn My boy, You Fockin' Won";
                        
                        }
                        else if(computer == 'p'){
                        std::cout << "Its a tie!!";

                        }
                        else {

                        std::cout << "Fock OFF LOOSER!!";
                        }
                        break;

            case 's' : if(computer == 'r'){

                        std::cout << "Fock OFF LOOSER!!";
                        
                        }
                        else if(computer == 'p'){
                        std::cout << "GodDAMn My boy, You Fockin' Won";

                        }
                        else {

                        std::cout << "Its a tie!!";
                        }
                        break;
        }
     
}