#include <iostream>

using namespace std;
int main(){
    int arr[] = {-3,-4,-5,-6,-8,-2,-5};
    int n = sizeof(arr)/sizeof(int);
    int mx = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]> mx)
         mx = arr[i]; // or we can also do that mx = max(mx,arr[i]) --> built-in function
    }
    cout << "Max is: " << mx;
    return 0;
}