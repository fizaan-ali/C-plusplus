#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    } 
    // int i = 0;
    // int j = n-1;
    // while(i<j){
    //     swap(arr[i],arr[j]);      Also we can done using while looop
    //     i++;
    //     j--;
    // }
    // OUTPUT   
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
// swap the numberss!!!!!!!