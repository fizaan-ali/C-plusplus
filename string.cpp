#include <iostream>
using namespace std;
int main(){
    // STRINGS --> CHARACTER ARRAYS
    string s;
    cout << "Enter a string: ";
    // cin >> s; // BUT cin has a limitation it will take input only one word
    // means whenever space is encountered it will stop taking input
    getline(cin,s);
    cout << s;
    return 0;
}