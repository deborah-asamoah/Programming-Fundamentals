#include <iostream>
#include <string>


using namespace std;

void findingTheCharacters (int start, int numb, char c[] ){
    cout << "[ " << numb << " ] ";
    for (int character = 1; character <= numb ; ++character) {
        cout << c[start + character];
    } 
    cout << endl;
}


int main (){
    // char c[]  = "hello-this-is-a-line-of-input-";

    char c[256];

    cout << "Please enter a hypen separated statement: ";
    cin >> c;



    
    int length = sizeof(c)/ sizeof(c[0]) -1;

    int startingIndex = -1;
    int endingIndex = 0;

    for (int i = 0; i < length; i++){
        if (c[i] == '-'){
            endingIndex = i-1;
            int numberOfCharacters = endingIndex-startingIndex;
            findingTheCharacters(startingIndex, numberOfCharacters, c );
            
            startingIndex = i;
        } else if (i == length-1 ) {
            int numberOfCharacters = i - startingIndex;
            findingTheCharacters(startingIndex, numberOfCharacters, c);
        }

    }

}

