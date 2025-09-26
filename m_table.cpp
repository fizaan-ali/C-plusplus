#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    // for (int i = 1; i<=10; i++){
    //     cout << num << " X " << i << " = " << num*i << endl;
    // }
    for (int i = num; i<=num*10; i+=num){
        cout<< i << " ";
    }
    return 0;
}