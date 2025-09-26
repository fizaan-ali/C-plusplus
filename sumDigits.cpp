#include <iostream>
using namespace std;
int main(){
    // Sum of digits of a given number e.g 3412 --> 10
    int num; 
    cout << "Enter a number: " ;
    cin >> num;
    int sum = 0;
    while(num!=0){
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    cout << "Sum of digits: " << sum;
    return 0;
}