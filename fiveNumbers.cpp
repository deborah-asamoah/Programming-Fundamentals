#include <iostream>

int main (){
    int numbers[5];
    int sum = 0;
    for (int i = 0; i < 5; i++){
        std::cin >> numbers[i];
        sum = sum + numbers[i];
    }
    int len = sizeof(numbers) / sizeof(numbers[0]);

    double meanOfFiveNumbers = sum / len;
    std:: cout << "The mean of the five numbers is " << meanOfFiveNumbers;


}

