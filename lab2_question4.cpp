#include <iostream>
#include <cstring>
#include <string>

using namespace std;

typedef struct {
    string my_array[10];
} MyData;

int findLargestSize (string strings[]){
    int current_max = 0;

    for (int i = 0; i < 10; i++){
        if (strings[current_max].size() < strings[i].size()){
            current_max = i;
        }     
    }
    return current_max;
}


int main (){
    MyData my_data;

    cout << "Please enter 10 strings" << endl;

    for (int i = 0; i < 10; i++){
        cin >> my_data.my_array[i];
    }

    cout << "The string with the largest size is: " << my_data.my_array[findLargestSize(my_data.my_array)];
    


}
