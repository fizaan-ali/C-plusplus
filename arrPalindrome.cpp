#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 1; // 1 means palindrome...
    for(int i=0; i<n/2; i++){
        if(arr[i]!=arr[n-1-i]){
            flag = 0; // 0 means not palindrome 
            break; 
        }
            
    }
    if(flag == 0)
        cout << "Array is not palindrome.";
    else 
        cout << "Array is palindrome";
    return 0;
}