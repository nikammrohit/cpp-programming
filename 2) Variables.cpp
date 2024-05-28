#include <iostream>

int main(){
    //integer
    int age = 19;
    int year = 2332;
    double days = 3.4; //double (decimal value)
    //std::cout << days;

    //char (single character)
    char currency = '$';
    char initial = 'R';
    //std::cout << initial;

    //bool (true or false)
    bool lights = true; 
    bool forsale = false;

    //string (sequence of text)
    std::string name = "Rohit";
    std::string dayOfWeek = "Thursday";
    std::string favFood = "CHIPOTLE";


    //example use of all types
    std::cout << "Rohit's favorite food is " << favFood << "\n";
    std::cout << "his age is " << age << "\n";
    std::cout << "he is getting it in " << days << " days" <<"\n";

    return 0;
}
