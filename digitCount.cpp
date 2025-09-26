#include <iostream>
using namespace std;
int main(){
    // count the no. of digits in a given numbers! like 1244 has 4 digits!
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int digit = 0;
    while(num != 0){
        num/=10;
        digit++;
    }
    cout << "No. of digits: " << digit; 
    return 0;
}