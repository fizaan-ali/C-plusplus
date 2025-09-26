#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,6,7,3,02,-2};
    int n = sizeof(arr)/sizeof(int);
    int diff = 0;
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i<n; i++){
        if(i%2==0)
            sum1 += arr[i];
        else
            sum2 += arr[i];
    }
    diff = sum1 - sum2;
    cout << "Difference is : " << diff; // 6

    return 0;
}
/*
2 + 5 + 7 + 2 = 16
3 + 6 + 2 - 2 = 9
16 - 9 = 7
*/