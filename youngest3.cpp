#include <iostream>
using namespace std;
int main(){
    int age1, age2, age3;
    cout << "Enter 1st age: ";
    cin >> age1;
    cout << "Enter 2nd age: ";
    cin >> age2;
    cout << "Enter 3rd age: ";
    cin >> age3;

    if(age1<age2){
        if(age1 < age3)
            cout << age1 << " is the youngest";
        else // age3 < age 1 
            cout << age3 << " is the youngest";
    }
    else{ // age2<age1
        if(age2 < age3 )
            cout << age2 << " is the youngest";
        else // age3 < age2
            cout << age3 << "is the youngest";
    }
    return 0;
}