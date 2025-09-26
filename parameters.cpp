#include <iostream>
using namespace std;
void sum(int a, int b){ // formal parameters
    cout << a+b;
}
int main(){
    sum(4,5); // actual parameters // pass by value
    return 0; // in C++ there is default return 0 so if you write or not it's okay
}