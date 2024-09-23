#include <iostream>
#include <ctime>

int main() {

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do
    {
        std::cout<<"Guess a number between 1-100: ";
        std::cin>>guess;
        tries++;

        if(guess > num){

            std::cout<<"Too High!!\n";


        }
       else if(guess < num){

            std::cout<<"Too Low!!\n";

       }
        else{

            std::cout<<"Correct!! in " << tries << "     tries \n";

        }

       
        
    }while (guess!=num);

    return 0; 
    

}