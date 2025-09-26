#include <iostream>
using namespace std;
int factorial(int num){
    int product = 1;
    for(int i=1; i<=num; i++){
        product = product * i;
    }
    return product;
}
int main(){
    int n,r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    int comb = (factorial(n))/(factorial(r)*factorial(n-r)) ;
    cout << "Combination is: " << comb;
}