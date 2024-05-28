#include <iostream>

int main (){

    double temp;
    char unit;
    std::cout << "***** Temperature Conversion *****\n";
    std::cout << "F = Farenheight\n";
    std::cout << "C = Celcius\n";
    std::cout << "What is the temperature? ";
    std::cin >> temp;
    std::cout << "What unit would you like to convert to? ";
    std::cin >> unit;

    if (unit == 'C' || unit == 'c')
    {
        std::cout << "The temperature is: " << (temp-32) / 1.8 << " degrees celcius\n";
    }
    else if (unit == 'F'|| unit == 'f')
    {
        std::cout << "The temperature is: " << temp * (9/5) +32 << " degrees farenheight\n";
    }
    else{
        std::cout << "Please enter a valid unit \n";
    }
    
    
    std::cout << "**********************************";
    return 0;
}