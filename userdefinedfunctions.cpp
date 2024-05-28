#include <iostream>

void happyBirthday(std::string name, int age);

//function = block of reusable code
int main(){

    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    int age = 20;

    happyBirthday(name, age); //calls invoke function
    


    return 0;
}

//we put function at end of main to make it more readable
void happyBirthday(std::string name, int age){ //we insert parameter "name" so the functions can read and reciprocate it for each other
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday dear " << name << "\n";
    std::cout << "Happy birthday to you!\n\n";
    std::cout << "You are now " << age << " years old!" << "\n\n";
}