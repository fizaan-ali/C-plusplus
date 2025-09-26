#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int product = 1;
    while(n!=0){
        int digit = n%10;
        product = product * digit;
        n /=10;
    }
    cout << "Product of digits: " << product;
    
    return 0;
}