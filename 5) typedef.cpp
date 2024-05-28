#include <iostream>
#include <vector>
/*typedef is essentially nicknames for an existing datatype. Allows for better readability*/


//typedef std::string text_t; /*A common convention is to put _t as a suffix for typedef identifiers*/
//typedef int number_t;


//int main (){

    //text_t firstName = "Rohit"; /*instead of std:string firstName*/
    //number_t age = 19;
    //std::cout <<firstName << "\n";
    //std::cout <<age << "\n";

    //return 0;
//}

/*"using" is largly used now instead of typedef*/

using text_t = std::string;
using weight_t = double;

int main (){

    text_t firstName = "Rohit";
    weight_t weight = 19.31;

    std::cout <<firstName << "\n";
    std::cout <<weight << "\n";

    return 0;
}
