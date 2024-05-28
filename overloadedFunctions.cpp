#include <iostream>

void bakePizza();
void bakePizza(std:: string topping1, std::string topping2);

int main(){

    bakePizza("cheese", "mushroom"); //we set string as pepperoni by typing it here

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza! \n";
}

//function can have same name as long as it has diff parameters (whats inside parenthesis).
// Both of these combined are called a function signature (each signature needs to be unique)

void bakePizza(std:: string topping1, std:: string topping2){ //we initiate string here rather than in main() since this is seperate function
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza! \n";
}