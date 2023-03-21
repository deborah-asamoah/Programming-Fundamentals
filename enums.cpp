#include <iostream>
using namespace std;

int main (){
    enum {RED, YELLOW, AMBER=YELLOW, GREEN};
    if (RED)
        cout << 1;
    else if (YELLOW)
        cout << 2;
    else
        cout << 3;
}
