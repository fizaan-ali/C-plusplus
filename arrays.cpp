#include <iostream>
using namespace std;
int main(){
    int arr[5]; // declaration of array
    // arr[0] = 1; // initialization of array
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // arr[4] = 3;
    cout << "Enter elements of array: ";
    for(int i=0; i<5; i+=1){
        cin >> arr[i];
    }
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    arr[0] = 100; // updating the value
    
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}