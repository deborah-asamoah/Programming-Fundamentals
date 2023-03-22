#include <iostream>
using namespace std;

int main (){

    cout << "Please input two operands: " << endl;
    int val1, val2;
    char o;

    cin >> val1 >> val2;

    cout << "Please input an operator: " << endl;
    cin >> o;

    cout << "Operand 1 is " << val1 << endl;
    cout << "Operand 2 is " << val2 << endl;
    cout << "Operator is " << o << endl;



    switch (o){
        case '*':
            cout << "Multiplying " << val1  << " and " << val2 << " = " << val1 * val2;
            break;

        case '+':
            cout << "Adding " << val1  << " and " << val2 << " = " << val1 + val2;
            break;


        case '-':
            cout << "Subtracting " << val1  << " from " << val2 << " = " << val2 - val1;
            break;

        case '/':
            cout << "Dividing " << val1  << " by " << val2 << " = " << val1 / val2;
            break;
        
        default:
            break;
    }

}



