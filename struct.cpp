#include <iostream>

struct Cars{

    std::string car;
    int model;
    std::string color;
};

void printCar(Cars &car);
void modifyCar(Cars &car, std::string color);

int main(){

        Cars car1;
        Cars car2;

        

        car1.car = "Toyota";
        car1.model = 2007;
        car1.color = "White";

        car2.car = "Lexus";
        car2.model = 2009;
        car2.color = "Red";

        modifyCar(car1, "green");
        modifyCar(car2, "Pink");

        printCar(car1);
        printCar(car2);



    return 0;
}

void printCar(Cars &car){

    std::cout << car.car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.color << '\n';

}

void modifyCar(Cars &car, std::string color){

    car.color = color;


}