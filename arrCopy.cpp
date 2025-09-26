#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int copy[n];
    for(int i=0; i<n; i++){
        copy[i] = arr[n-i-1]; // COPY THE VALUES IN REVERSE 
    }
    // output
     cout << "Original: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Copy : ";
    for(int i=0; i<n; i++){
        cout << copy[i] << " ";
    }
    return 0;
}
/*
    0 1 2 3 4 
    4 3 2 1 0
    --> So, how are we gonna print
    n-1 
    copy[i] = arr[n-i-1]
     0 - 4
     1 - 3

*/