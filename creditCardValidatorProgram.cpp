#include <iostream>

int getDigits(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){

    std::string cardNumber;
    int result;

    std::cout << "Enter Card #: ";
    std::cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

        if(result % 10 == 0){

            std::cout << cardNumber << " is valid." <<'\n';
        }

        else{
            std::cout << cardNumber << " is not valid." <<'\n';
        }

    return 0;
}

int getDigits(const int number){

    return (number % 10) + (number/10);


}
int sumOddDigits(const std::string cardNumber){

    int sum = 0;

    for (int i = cardNumber.size()-1 ; i >= 0 ; i-=2){
        
        sum += getDigits(cardNumber[i]- '0') ;

        
    }
    return sum;

}

int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    for (int i = cardNumber.size()-2 ; i >= 0 ; i-=2){
        
        sum += getDigits((cardNumber[i]- '0') * 2);


    }
    
        return sum;

}