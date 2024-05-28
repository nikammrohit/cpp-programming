#include <iostream>

int main(){
    /*the const keyword tells compiler to prevent anything 
    from modifying a variable (read-only). it adds data security*/


    const double PI = 3.4159; //we keep constants in all UPPERCASE just so we know
    double radius = 32^3;
    double volumeOfSphere = 4/3 * PI * radius;

    std::cout << "The volume of the sphere is "<< volumeOfSphere << "cm's" << '\n';
    
    return 0;
}
