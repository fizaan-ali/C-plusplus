#include <iostream>
using namespace std;
int main(){
    //          POINTERS! --> store the address of any data type
    // we can access the value of variable whose address is in the pointer using 
    // dereference operator(*)
    int x  = 3;
    int* p = &x;
    cout << &x << endl;
    cout << p << endl; 
    cout << x << endl;
    cout << *p << endl;
    cout << &p << endl;
    
    return 0;
}