#include <iostream>
#include <cmath>


int main(){
    double a;
    double b;
    double c;

    std::cout << "What is a? ";
    std::cin >> a;

    std::cout << "What is b? ";
    std::cin >> b;

    c = pow(a,2) + pow(b,2);
    c = sqrt(c);

    std::cout << "The hypotenuse has the length: " << c;

}
