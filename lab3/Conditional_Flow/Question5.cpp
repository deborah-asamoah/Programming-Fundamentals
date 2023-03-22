#include <iostream>
using namespace std;


void findingTheWords (int start, int numb, char c[] ){
    for (int character = 1; character <= numb ; ++character) {
        cout << c[start + character];
    } 
    cout << endl;
}


int main (){
    int position = -1;
    int startingIndex = -1;
    int endingIndex = 0;
    char words[256]{'\0'};
    char longestwords;
    int longestWordLength = 0;


    cout << "Print out words separated with spaces: ";
    cin.get(words, 256);

    for (int i = 0; i < 256; i++){
        if (words[i] != '\0'){
            position = i+1;
        } else {
            break;
        }
    }

    for (int i = 0; i < position; i++){
        if (words[i] == ' '){
            endingIndex = i-1;
            int lengthOfWord = endingIndex-startingIndex;

            if (lengthOfWord > longestWordLength){
                longestWordLength = lengthOfWord;
                findingTheWords(startingIndex, lengthOfWord, words);
            }
            startingIndex = i;
        } 
        else if (i == position-1 ) {
            int lengthOfWord = i-startingIndex;
            findingTheWords(startingIndex, lengthOfWord, words); 
        }
    }

    cout << longestwords << endl;
}


