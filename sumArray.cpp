#include <iostream>
using namespace std;
int main(){
    int arr[] = {3,4,5,6,7};
    // output
    for(int i=0; i<5; i+=1){
        cout << arr[i] << " ";
    }
    cout << endl;
    // calculate sum
    int sum = 0;
    for(int i=0; i<5; i++){
        sum += arr[i];
    }
    cout << "Sum is : " << sum;
    return 0;
}