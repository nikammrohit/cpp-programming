#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR ********** \n";
    std::cout << "Enter if you want +, -, *, or /: ";
    std::cin >> op;

    std::cout << "Enter number 1: ";
    std::cin >> num1;
    std::cout << "Enter number 2: ";
    std::cin >> num2;


    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "The answer is: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "The answer is: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "The answer is: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "The answer is: " << result << "\n";
        break;
    default:
        std::cout << "Please enter a valid operation" << "\n";
        break;
    }
    std::cout << "******************************** \n";
    return 0;
}
