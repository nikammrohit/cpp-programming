#include <iostream>

// cout << (output. what we have been using till now)
// cin >> (input)

int main(){
    

    std::string color;
    int age;

    std::cout << "what is your age? ";
    std::cin >> age;

    std::cout << "what are your 2 favorite colors? ";
    //std::cin >> color; //gets input of user but stops at first whitespace
    std::getline(std::cin >> std::ws, color); /*getline reads user input
    including whitespaces. >> std::ws gets rid of whitespace prior to the getline function
    to prevent reading it as input*/

    std:: cout << color << " ";
    std:: cout << age;


    return 0;
}