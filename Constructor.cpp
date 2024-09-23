#include <iostream>

class Cars{
    public:

        std::string make;
        std::string model;
        std::string type;
        int year;

        Cars(std::string make, std::string model, std::string type, int year){
                this-> make = make;
                this-> model = model;
                this-> type = type;
                this-> year = year;

        }



};

int main(){

    Cars car1("Toyota", "Celica", "Sports", 2000);

    Cars car2("Toyota", "Supra", "sports", 2000);

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.type << '\n';
    std::cout << car1.year << '\n';

    
    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.type << '\n';
    std::cout << car2.year << '\n';

    return 0;
}