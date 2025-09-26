#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    // if(n%2==0){
    //     cout << "Even!";
    // }
    // else{
    //     cout << "Odd";
    // }
    // (condition) ? if true : if false ;
    (n%2==0) ? cout<<"Even" : cout<<"Odd" ;//Ternary Operator
    return 0;
}