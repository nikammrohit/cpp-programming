#include <iostream>

// && = check if two conditions are true
// || = check if at least one of two conditions is true
// ! = reverse the logic of the operand

int main (){

    int wheels;

    std:: cout << "Enter the number wheels: ";
    std:: cin >> wheels;

    if (wheels >= 0 != wheels <= 2){ //insert operant here
        std:: cout << "It is a unicycle! ";
    }
    else{
        std::cout << "This looks like a strange sort of vehicle";
    }
    return 0;
}