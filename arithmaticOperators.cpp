#include <iostream>
// arithmatic operators just solve math operations (* + - /)
int main(){

    int cars = 30;
    //cars = cars +23;
    //cars +=23; //does the same thing as the above function
    //cars++; // increment operator (adds 1 incrementally)

    //cars -=23;
    //cars--[;]

    //cars*=2;
    //cars/=2;
    //cars/=4;
    
    int remainder = cars % 4;

    std::cout << remainder;

    return 0;
}