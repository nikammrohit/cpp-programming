#include <iostream>

int main(){

    for(int i=20; i>=0; i--){

        if (i==13){
            //break; //break = breaks out of loop
            // continue; //continue = skips current itteration
        }
        std::cout << i << "\n";
    }

    return 0;
}