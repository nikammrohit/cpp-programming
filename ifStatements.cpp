#include <iostream>

int main(){

    int age;
    std::cout << "How old are you? ";
    std::cin >> age;

    if (age>=100){
        std::cout << "You are too old to drive ";
    }

    if (age >=18)
    {
        std::cout << "You are allowed to drive this car! ";
    }

    else if (age<=0)
    {
        std::cout << "Wait you have not been born yet";
    }
    
    else{
        std::cout << "Sorry, you are not allowed to drive :((";
    }

    return 0;
}