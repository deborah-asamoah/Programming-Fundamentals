#include <iostream>

using namespace std;


void reverseCharacters (char characters[], int p){
    char reverseChar[p];

    for (int i = 0; i < p; ++i){
        reverseChar[i] = characters[p-i-1];
    }

    for (auto i : reverseChar)
    {
        cout << i;
    }
    
}


int main (){
    int position = -1;
    char c[256];
    cout << "Enter characters: " << endl;
    cin.get(c, 256);

    for (int i = 0; i < 256; i++){
        if (c[i] != '\0'){
            position = i+1;
        }
        else
        {
            break;
        }
           
    }
    cout << position<<endl;
    reverseCharacters(c, position);


}





