#include <iostream>

int main (){

    /*
    Write a program to read a word from the input into a std::string.
    Convert the std::string to an intrinsic character array (check here for the c_str method). 
    Using the const char*pointer, iterate through each of the characters in the character array and output to the display.
    */

    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    int wordLength = word.length();
    char c [wordLength];
    const char * pointer {word.c_str()};

    for (int i = 0; i < wordLength; i++)
    {
        std::cout << "Element at character array index " << i << " : " << *(pointer +i ) << std::endl;
    }
}
