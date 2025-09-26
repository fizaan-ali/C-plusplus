#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    cout << "Enter the decimal number: ";
    cin >> num;
    string bin = ""; // empty string
    if(num == 0) bin = "0";
    else{
        while(num!=0){
        int bit = num % 2;
        bin = to_string(bit) + bin ;
        num /= 2;
    }}
    cout << "Binary equivalent: " << bin;
    return 0;

}