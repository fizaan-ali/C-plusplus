#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool flag = true; // true means no. is prime
    if(n<=1) flag = false;
    for (int i=2; i<=n/2; i++){
        if(n%i==0){
            flag = false; // false means no. is composite  
            break;
        }
    }
    if(flag==true)
        cout << "Number is Prime!";
    else 
        cout << "Number is Composite!";
    return 0;
}