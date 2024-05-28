#include <iostream>
/*type conversion is when you convert a value of data type to another
implicit - automatic
explicit - precede value with a different data type (int)*/
int main(){

    //char x = (int) 100; //implicit. 100 as a character using ASCII Table is d
    //std::cout << x;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions *100;
    std::cout << score << '%';

    return 0;
}