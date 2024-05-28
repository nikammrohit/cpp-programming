#include <iostream>
#include <ctime>


//pseudo-random = not truly random

int main (){

    srand(time(NULL)); //initiats random number generator

    int num1= (rand() % 6) + 1; //sets num equal to remained of random number/6 (since we talking abotu die)
    int num2= (rand() % 6) + 1;
    int num3= (rand() % 6) + 1;
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    return 0;
}

