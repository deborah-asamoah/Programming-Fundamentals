#include <iostream>
using namespace std;



// defining my function in namespace to ensure it does not clash with existing libraries
namespace my{

    // Compares the elements of l with r and returns zero if they are all the same, a negative value if l < r and a positive value if l > r
    int strcmp(const char *l, const char *r){
        while (true){
            if (*l != *r){
                int as_l = int(*l);
                int as_r = int(*r);
                return as_l > as_r ? 1 : -1;
            }
            if (!*l || !*r){
                break;
            }
            *l++, *r++;
        }
        return 0;
    }

    // Returns the length of s excluding the termination character '\0'
    int strlen(const char *s){
        int count = 0;
        while (*s++){
            count++;
        }
        return count; 
    }

    
    // char *strcat(char *l, const char *r);
    // // Concatenates (appends) r on to the end of l, and returns  l
    
    // char *strcpy(char *l, const char *r);
    // // Copies the contents of r over the contents of l, and returns l 
    
    // char *toupper(char *s);
    // // Converts the characters in s to uppercase, and returns s
} 




   char *strcats(char *l, const char *r){
        while(*r != '\0'){
            if (*l == '\0')
                *l = *r;
            ++l;
            ++r;
        }
        *l = '/0';
        return l;
    }
    // }


int main (){

    string word1;
    string word2;

    cout << "Word1 : ";
    cin >> word1;
    cout << "Word2 : ";
    cin >>word2;

    char *word1_ptr {word1.c_str()};
    const char *word2_ptr {word2.c_str()};

    cout << strcats(word1_ptr, word2_ptr) << endl;








    // const char b {'b'};

    // const char *ap {&a};
    // const char *bp {&b};
    // std::cout << strcmps(ap, bp);

    // std::cout << strcats(ap, bp) << std::endl;







}

