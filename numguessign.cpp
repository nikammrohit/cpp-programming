#include <iostream>
#include <ctime>

int main(){

    int guess;
    //std::cout << "You have 5 tries to guess the number: ";

    srand(time(NULL));
    int randNum = rand()%10+1;

    for(int i=4; i>=0;i--){
        std::cout << "Guess a number from 1-10: ";
        std::cin >> guess;
        //std::cout << "You have 5 tries to guess the number: ";

        if (randNum == guess)
        {
            std::cout << "Correct! You Won! ";
            break;
        }
        else if (randNum != guess) {
            std::cout << "Wrong try again \n";
        }
        
    }

    return 0;
}