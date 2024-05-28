#include <iostream>

int main (){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); //does not cut off string if user enters a space. Allows Rohit Nikam, rather than cutting off after Rohit.

    // name.length(); //length gives length of string  
    // std::cout << name.length();

    // std::cout << (name.empty() ? "NO enter emtpy name": "Nice name" ); //empty enters a boolean value if something is empty

    //name.clear();
    // std::cout << "Hello" << name; // clears name value

    // name.append("@gmail.com");
    // std::cout << "your name is now " << name; // adds string to end of variable

    //std::cout << name.at(0); //returns location of a char in a str using # in str
    //name.insert(0, "@"); //inserts @ at index 0
    //std::cout << name.find("Roh"); finds location
    //name.erase(0,3); // deletes characters starting from (char, last char)
     

    return 0;
}