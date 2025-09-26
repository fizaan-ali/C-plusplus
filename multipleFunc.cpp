#include <iostream>
using namespace std;

void usa(){
    cout << "You are in USA";
    pakistan();
    return;
}
void pakistan(){
    cout << "You are in Pakistan";
    return;
}
int main(){
    cout << "You are in main";
    pakistan();
    usa();
    return 0;
}
/*
If you call a function in another function then that function should be 
above that function, otherwise it will give an error!
*/