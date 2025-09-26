#include <iostream>
using namespace std;
int main(){
    int num1, num2;     char op;

    // if(op=='+') cout << num1+num2;
    // if(op=='-') cout << num1-num2;
    // if(op=='*') cout << num1*num2;
    // if(op=='/') cout << num1/num2;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter number 1: " ;
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    switch(op){
        case '+':
            cout << num1 + num2 << endl; break;
        case '-':
            cout << num1 - num2 << endl; break;
        case '*':
            cout << num1 * num2 << endl; break;
        case '/':
            cout << num1 / num2 << endl; break;
        case '%':
            cout << num1 % num2 << endl; break;
        default:
            cout << "Invalid Operator!" << endl;
    }
    return 0;
}