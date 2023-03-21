#include <iostream>
using namespace std;



int main (){
    int i;
    int * pointer_to_i = & i;
    int & reference_to_i = i;
    const int const_i = i;

    // assigning values to the variables
    i = 5;
    cout << "Starting point for the integer" << i <<endl; 
    i = * pointer_to_i + 1;

    cout << "Increment by a pointer" << i <<endl; 


    i = reference_to_i + 1;

    cout << "Increment by a referene" << i <<endl;

    // it gives the error expression "Expression must be a modifiable Ivalue"

    int hexnum {0xf3f2};
    int oct {0437};
    int a {'a'};

    cout << hexnum << endl <<oct <<endl << a << endl;
}

