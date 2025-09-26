#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case 
    print(n-1); // call
    cout << n << endl; // work
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print(n);
    return 0;
}
/*
if we can just flip the call with work it will print numbers in descending order
call ke baad work karna se aur call ke pehle work karne se sari chizein 
ult ho jati hain
*/