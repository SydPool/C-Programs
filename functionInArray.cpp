#include <iostream>

std::string getTotal(std::string students[], int size);

int main(){

    std::string students[] = {"Sidd ","eats " "rice ","daily "};

    int size = sizeof(students)/sizeof(students[0]);

    std::string total = getTotal(students, size);

    std::cout << total;

    return 0;
}

std::string getTotal(std::string students[], int size){

    std::string total;

    for(int i = 0 ; i < size ; i++){

        total += students[i];
    }


return total;

}