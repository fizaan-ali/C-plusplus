#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    //1,2,4,8,16,.......
    int a = 1; // first number in series
    for (int i=1; i<=n; i++){ // n = how many numbers you want to print
        cout << a << " ";
        a = a * 2; // Multiply by the ratio btw two consecutive numbers
    }
    return 0;
}