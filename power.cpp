#include <iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    
}
int main(){
    int a , b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the exponent: ";
    cin >> b;
    cout << "Power is : " << power(a,b);
    return 0;
}
/*
a^b = a^(b/2) * a^(b/2) --> logarithmic approach
*/