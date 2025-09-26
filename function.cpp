#include <iostream>
using namespace std;
void greet(){ // function definition
    cout << "Hello there! Good morning" << endl;
    cout << "How are you ?" << endl;
}
int main(){
    greet(); // function call
    cout << "Welcome" << endl;
    greet();
    return 0;
}