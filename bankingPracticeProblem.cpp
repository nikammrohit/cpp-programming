
#include <iostream>
#include <iomanip>
//Needs to: show balance, deposit money, withdraw money

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 100;
    int choice;
    std::cout << "\n";

    do
    {
    std::cout << "Enter your choice:\n 1. Show Balance\n 2. Deposit Money\n 3. Withdraw Money\n 4. Exit\n";
    std::cin >> choice;

    switch (choice)
    {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting! \n";
            break;
        default:
            std::cout << "Invalid choice! \n";
            break;
    }
    } while (choice !=4);
    

    return 0;
}


void showBalance(double balance){
    std::cout << balance;
}
double deposit(){
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;


    
    return amount;
}
double withdraw(double balance){
    double amount = 0;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficient funds\n";
        return 0;
    return 0;
    }
    else if (amount < 0)
    {
        std::cout << "Thats not a valid amount\n";
        return 0;
    }
    else{
        return 0;
    }
    
    
}