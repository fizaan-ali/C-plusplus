#include <iostream>
using namespace std;
void swap(int* x, int* y){ // USING POINTERS
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x = 5, y = 2;
    cout << x << " " << y << endl;
    swap(&x,&y);
    cout << x << " " << y << endl;
    
} 
// #include <iostream>
// using namespace std;
// void swap(int& x, int& y){ // USING REFERENCES
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
//     int x = 5, y = 2;
//     cout << x << " " << y << endl;
//     swap(x,y);
//     cout << x << " " << y << endl;
// }