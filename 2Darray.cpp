#include <iostream>
using namespace std;
int main(){
    // 2d array, matrix, grid, table, array of arrays, 
    int arr[2][3]; // declaration
    int r = 2, c = 3;
    // arr[0][0] = 3; // initialization
    // arr[0][1] = 2;
    // arr[0][2] = 4;
    // arr[1][0] = 5;
    // arr[1][1] = 1;
    // arr[2][2] = 0;

    // TAKING INPUT USING LOOOP
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "Enter value for arr["<<i<<"]["<<j<<"]: " ;
            cin >> arr[i][j];
        }
    }
    // OUTPUT
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // also we can take transpose of a matrix by interchanging rows with cols.

    return 0;
}