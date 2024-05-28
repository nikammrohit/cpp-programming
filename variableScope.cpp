#include <iostream>

void printNum();

int myNum = 3; //Global Variable - not as secure and pollutes global workspace
int main(){

    //a fucntion will use local variables first before using global variables

    //Local variables = declared inside function or block {}
    //Global variables = declared outside of all funcitons (top of program)

    int myNum = 1;
    printNum();
    std::cout << ::myNum << "\n"; //use :: to use scope version whihc inverts what is said in line 8.
                                // In this case it will use global variables before using local variables

    return 0;
}

void printNum(){
    int myNum = 2; //local variable
    std::cout << myNum << "\n";
}