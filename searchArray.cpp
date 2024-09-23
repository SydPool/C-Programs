#include <iostream>

int searchArray(std::string array[], int size , std::string element);

int main(){

    std::string food[] = {"Pasta", "Pizza", "Burger", "Noodles", "Dumapling"};
    int size = sizeof(food) / sizeof(food[0]);

    std::string myfood;
    int index;

    std::cout << "Enter the food you are searchin for\n";
    std::getline(std::cin, myfood);

    index = searchArray(food, size, myfood);

    if(index != -1){

    std::cout << myfood << " is in index " << index ;

    }

    else{

        std::cout << "its not in the array";
    }
    
    return 0;
}

int searchArray(std::string array[], int size , std::string element){

    for (int i = 0 ; i < size ; i++){

        if( array[i] == element ){

                return i;
        }
    }


    return -1;
}