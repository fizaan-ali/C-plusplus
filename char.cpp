#include <iostream>
using namespace std;
int main(){
    // char ch = '%';
    // cout << ch;
    // ASCII VALUES! --> very important
    /*
        'a' = 97        'A' = 65        '0' = 48
        'b' = 98        'B' = 66        '1' = 49
        .                .              .
        .  (+26)         .              .
        .                .              .
        'z' = 122        'Z' = 90       '9' = 57
    */

    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    cout << (int)ch; // Using typecast! we can find the relative ASCII value
    return 0;
}