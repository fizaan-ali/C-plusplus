#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,7,78,5,4,3,2};
    int x = 4;
    int n = sizeof(arr)/sizeof(int);
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > x)
            count++;
    }
    cout << "Count: " << count;
    return 0;
}