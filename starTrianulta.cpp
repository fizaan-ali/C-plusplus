#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
/*
1--4  = 5
2--3  = 5
3--2  = 5
4--1  = 5

n+1-i
*/