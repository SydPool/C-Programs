#include <iostream>

std::string concatStrings(std::string string1, std::string string2 );

int main(){
    std::string firstName = "Siddharth";
    std::string lastName = "Dulal";
    
    std::cout<<"Hello "<< concatStrings(firstName, lastName);

    return 0;

}

std::string concatStrings(std::string string1, std::string string2 ){
        return string1 + ' '+ string2;


}