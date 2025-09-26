#include <iostream>
using namespace std;
int main(){
    // int num;
    // cout << "Enter a number : ";
    // cin >> num;
    // cout << "Half of number is : " << num/2;
    // // The above line will not give right output if we divide
    // // odd number bcz when integer is divided by some integer
    // // the result is integer in c++.(integer division)
    int num;
    cout << "Enter a number: ";
    cin >> num;
    float y = (float)num; //or cout << (float)num/2;
    cout << "Half of number is : " << y/2;
    return 0;
}