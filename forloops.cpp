#include <iostream>
//a for loop runs a block of code a specified amoutn of times

int main(){

    for(int i = 10; i>=0;i-=2){ //i = index. int i=1 run as long as it is <= 6 incrementing i by 1
                            //i+=2 increments by 2 compared to ++ which is by 1
        std::cout << i << "\n";
    }

    std::cout << "Happy birthday \n";

    return 0;
}