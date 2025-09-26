#include <iostream>
using namespace std;
void greet(){
    cout << "Hey" << endl;
    greet(); // it will run indefinitely // function calling itself  
}
int main(){
    greet();
}