#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,5,6,7}; // one-line declaration
    arr[3] = 5; // updation
    //output
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // reverse printing
    for(int i=4; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}