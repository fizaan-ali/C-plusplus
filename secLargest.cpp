#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = INT_MIN;
    int secLargest = INT_MIN;
    for(int i=0; i<n; i+=1){
        if(arr[i]>largest){
            secLargest = largest;
            largest = arr[i];
        }
    }
    // ALTERNATE METHOD
    // for(int i=0; i<n; i+=1){
    //     if(arr[i] > largest)
    //         largest = arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     if(arr[i] > secLargest and arr[i] != largest)
    //         secLargest = arr[i];
    // }
    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secLargest;
    return 0;
}