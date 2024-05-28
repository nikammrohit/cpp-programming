#include <iostream>

//nested loop is just a loop inside of another loop

int main(){


    int rows;
    int col;
    char symb;

    std::cout << "How many rows should the rectangle have: ";
    std::cin >> rows;

    std::cout << "How many columns should the rectangle have: ";
    std::cin >> col;

    std::cout << "What symbol should it be made out of: ";
    std::cin >> symb;

    for (int i=1;i<=rows;i++){


        for(int j=1;j<=col;j++){
            std::cout <<symb;      //we dont want indexes to be the same so it is normal for inner to be renamed as j
    }

    std::cout << "\n";

    }


    return 0;
}