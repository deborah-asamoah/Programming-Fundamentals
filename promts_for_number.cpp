#include <iostream>

int promtsForANumber (){
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;

    if (number % 2 == 0){
        for (int i = 1; i <= 20; i++){
            std::cout << i  << " x " << number << " = " << i * number << std::endl;
        }
    } else {
        for (int i = 1; i <= 29; i++){
            if (i % number != 0){
                std::cout << i << std::endl;
            }
        }
    }
}


int main () {
    std::cout << promtsForANumber();

}



