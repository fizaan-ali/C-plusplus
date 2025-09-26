#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int d = 3;
    for(int i=4; i<=3*n+1; i+=d){ //-->this can be calculated using A.P forumula an = a1 + (n-1)*d
        cout << i << " ";
    }
    // 4, 7, 10, 13, 16, ..........n
    // 1,3,5,7,.......n
    
    return 0;
}