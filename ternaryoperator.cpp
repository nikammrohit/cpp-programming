#include <iostream>

//ternary operator (?:) = replacement to if/else statement
//condition ? expression 1: expression 2;

int main(){

    //double grade;
    //std::cout << "What is your number grade? ";
    //std::cin >> grade;

    //grade >= 60 ? std::cout << "You passed! ": std::cout << "You failed ";


    //int number;
    //std::cout << "enter a whole number between 1-10: ";
    //std::cin >> number;
    
    //number%2==1 ? std::cout << "This number is odd ": std::cout << "This number is even ";
    

    bool hungry = true;

    // hungry ? std::cout << "You are hungry ": std::cout << "You are full "; // a diff way to write this is down below
    std::cout << (hungry ? "You are hungry ": "You are full ");

    return 0;
}