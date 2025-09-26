#include <iostream>
using namespace std;
int main(){
    // order should be same!
    int m1[2][3] = {1,2,3,4,5,6};
    int m2[2][3] = {1,3,4,5,3,2};
    int c[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            c[i][j] = m1[i][j]+m2[i][j];
        }
    }
    //output
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
    1 2 3       1 3 4       2 5 7
    4 5 6       5 3 2       9 8 8 
*/