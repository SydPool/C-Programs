#include <iostream>
#include <iomanip>
#include <limits>


void showBalance(double balance);
double deposite();
double withdraw(double balance);


int main(){

    double balance = 0;
    int choice = 0;

    do{
    
    std::cout<<"******************\n";
    std::cout<<"Enter your choice:\n";
    std::cout<<"******************\n";
    std::cout<<"1. Show Balance\n";
    std::cout<<"2. Deposite money\n";
    std::cout<<"3. Withdraw money\n";
    std::cout<<"4. Exit\n";
    std::cin >> choice;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch(choice)
    {

        case 1: 
            showBalance(balance);
            break;

        case 2:
            balance += deposite();
            std::cout << "Your Balance is : $" <<balance << '\n';

            break;

        case 3:

            balance -= withdraw(balance);
            std::cout << "Your Balance is : $" << balance << '\n';
            break;
        
        case 4:
            std::cout << "****Thank you for using my ATM**** \n";
            break;

        default :
            std::cout << "Please enter valid input!! \n";
            
    }


   
     } while(choice!=4);



    return 0; 
}

void showBalance(double balance){

        std::cout << "Your Balance is : $"<< std::setprecision(2) << std::fixed  << balance << '\n';

        

}

double deposite(){
        double amount;
        std::cout <<"Enter the money to be deposited :";
        std::cin >> amount;

        if(amount > 0){
                return amount;

        }
        else{
            std::cout << "Please enter valid amount\n";
            return 0;
        }
        
}

double withdraw(double balance){
        double amount;
        std::cout << "Enter the amount to withdraw: ";
        std::cin >> amount;

        

    if (amount > balance){
        std::cout << "Insufficient Fund\n";
        return 0;

    }
    else if(amount < 0){
    std::cout << "Please enter valid amount\n";
        return 0;
    }

    else{

        return amount;
    }
}