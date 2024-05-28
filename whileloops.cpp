#include <iostream>

int main(){

    std::string name;

    while(name.empty()){ //while some condition remains true, continue to execute some code.
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
}