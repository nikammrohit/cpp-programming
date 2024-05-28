#include <iostream>

//switches - alt form of multiple "else if" statements. If this then do y for multiple diff values.
// compares one value to matching cases


int main(){
/*
    int wheels;
    std::cout << "How many wheels does your vehicle need ";
    std::cin >> wheels;

    switch(wheels){ //similar to Many else if but all in one function
        case 1: //if wheels =1
            std::cout<< "It is a unicycle";
            break; //breaks out of the switch

        case 2:
            std::cout<< "It is a bike";
            break;

        case 3:
            std::cout<< "It is a tricycle";
            break;

        case 4:
            std::cout<< "It is a car";
            break;
        
        default:
            std::cout<< "sorry, please only enter numbers 1-4"; //if there are no matching cases we can go to a default case, similar to else statement
            break;
           
    }
*/


    char grade;
    std::cout << "What letter grade do you have? ";
    std::cin >> grade;
    
    switch (grade)
    {
    case 'A':
        std::cout << "Great job";
        break;
    case 'B':
        std::cout << "You did good";
        break;
    case 'C':
        std::cout << "You did okay";
        break;
    case 'D':
        std::cout << "You did bad";
        break;
    case 'F':
        std::cout << "You Failed";
        break;
    default:
        std::cout << "Please enter a letter from A-F";
        break;
    }



    return 0;
}