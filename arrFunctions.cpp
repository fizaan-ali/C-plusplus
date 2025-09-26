// #include <iostream>
// using namespace std;
// void change(int x){
//     x = 8;
// }
// int main(){
//     int x = 3; 
//     cout << x << endl;
//     change(x); // pass by value
//     cout << x << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
void change(int x[]){
    x[1] = 8;
}
int main(){
    int arr[3] = {0,1,2};
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    change(arr); // this is how we pass the arr in function 
    // also this is pass by reference ... we change sometihng in function this would change in main func
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}