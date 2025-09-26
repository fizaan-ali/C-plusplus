#include <iostream>
using namespace std;
int main(){
    //FOR-EACH LOOP 
    int arr[5];
    // taking input
    for(int &x : arr){ // use '&' operator so values are stores in same memoery location // we are using x same as reference alias for arr[i]
        cin >> x;
    }

    for(int i : arr){ // easy way to read all the values of array!
        cout << i << " ";
    }
    cout << endl;

    // also if you want to modify every element in array you can
    for(int &i : arr){
        i *= 2;
    }
    // after modify
    for(int i: arr){
        cout << i << " ";
    }

    return 0;
}