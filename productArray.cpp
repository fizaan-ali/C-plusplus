#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int product = 1;
    for(int i=0; i<n; i++){
        product *= arr[i];
    }
    cout << "Product = " << product;
    return 0;
}