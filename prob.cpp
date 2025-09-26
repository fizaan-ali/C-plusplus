#include <iostream>
using namespace std;
int main(){
    int x = 10, b = 30;
    if(x==b); // imp --> the semicolon at the end means if statement is finsihed
        cout << "Both are equal"; // now its not the part of if it will run despite of true or false of condtion
    return 0;
}