#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case is very important otherwise it will run infinitely
    cout << n << endl;
    print(n-1);
}
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    
    print(n );
}