#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int bin;
    cout << "Enter the binary number: ";
    cin >> bin;
    int dec = 0;
    string bins = to_string(bin);
    for(int i=0; i<bins.length(); i++){
        int lDigit = bin % 10;
        lDigit *= pow(2,i);
        dec += lDigit;
        bin /= 10;
    }
    cout << "Decimal equivalent is : " << dec;
    return 0;
}
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int bin;
//     cout << "Enter the binary number: ";
//     cin >> bin;
//     int dec=0;
//     int i = 0;
//     while(bin!=0){
//         int digit = bin % 10;
//         digit *= pow(2,i);
//         dec += digit;
//         i++;
//         bin /= 10;
//     }
//     cout << "Decimal equivalent is : " << dec;
//     return 0;
// }