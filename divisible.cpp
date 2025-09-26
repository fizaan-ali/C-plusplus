// Divisble by 3 or 5 but not by 15 
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if((num%3==0 or num%5==0) and (num%15!=0)){
        cout << "Right number!";
    }
    else{
        cout << "Wrong number!";
    }
    return 0;
}