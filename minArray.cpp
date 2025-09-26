
#include <iostream>
using namespace std;
int main(){
    int arr[] = {3,5,6,7,3,32,5,7,8};
    int n = sizeof(arr)/sizeof(int);
    // int mn = arr[0]; 
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        mn = min(mn, arr[i]); // we can also do that if(mn < arr[i]) mn = arr[i];
    }
    cout << "Min is: " << mn;
    return 0;
}