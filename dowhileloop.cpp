#include <iostream>

//do while loop = do some block of code first, THEN repeat again if a conditon is true
int main(){

    int number;

    do {
        //runs this code first, THEN it is repeated ONLY if the while statement is true
        std::cout << "Enter a positive number: ";
        std::cin >> number;

    } while (number<0);

    std::cout << "The number is: " << number;

    return 0;
}