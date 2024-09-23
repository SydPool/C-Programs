#include <iostream>

int main(){

  /*int *pNum = NULL;

    pNum = new int ;

    *pNum = 21;

    std::cout << "address: "<< pNum << '\n';
    std::cout << "value: "<< *pNum << '\n';

    delete pNum; */

    char *pGrade = NULL;
    int size;

    std::cout << "Enter the number of grade to entre in: ";
    std::cin >> size;

    pGrade = new char[size];

    for (int i  = 0; i < size ; i++){

        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrade[i];

    }

    for (int i = 0; i < size ; i++){

        std::cout << pGrade[i] << ' ';
    }

    delete[] pGrade;

    return 0;
}