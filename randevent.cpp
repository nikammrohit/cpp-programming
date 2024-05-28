#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));
    int randNum = rand()%5+1; //rand num between 1 and 5

    switch(randNum){
        case 1:
            std::cout << "You got a bumper sticker! ";
            break;
        case 2:
            std::cout << "You got a t-shirt! ";
            break;
        case 3:
            std::cout << "You got a free lunch! ";
            break;
        case 4:
            std::cout << "You got a gift card! ";
            break;
        case 5:
            std::cout << "You got a concert ticket! ";
            break;
    }
    return 0;
}