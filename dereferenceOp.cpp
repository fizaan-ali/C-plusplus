#include <iostream>
using namespace std;
int main(){
    //          POINTERS! --> store the address of any data type
    // we can access the value of variable whose address is in the pointer using 
    // dereference operator(*)
    int x = 12;
    int* ptr = &x;
    *ptr = 233; // also update using * operator 
    cout << x << endl;
    return 0;
}