// #include <iostream>
// using namespace std;
// int power(int base, int exp){
//     int product = 1;
//     for(int i=1; i<=exp; i+=1){
//         product = product  * base;
//     }
//     return product;
// }
// int main(){
//     int base, exp;
//     cout << "Enter the base: ";
//     cin >> base;
//     cout << "Enter the exponent: ";
//     cin >> exp;
//     cout << "Power is : " << power(base, exp);
//     return 0;
// }
//USING RECURSION
#include <iostream>
using namespace std;
int power(int base, int exp){
    if(exp == 0) return 1;
    return base * power(base, exp-1);
}
int main(){
    int base, exp;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exp;
    cout << "Power is: " << power(base,exp);
    return 0;
}

// 2^3 = 2 * 2^2
// power(n) = n * power(n-1)