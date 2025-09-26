#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=n; i++){ // for spaces
        for(int j=1; j<=n-i; j++){
            cout << "  ";
        }
        for(int k=1; k<=i; k++){ // for stars
            cout << "* ";
        }
        cout << endl;
    }
}

/* n =  4;
1 -- 3
2 -- 2
3 -- 1
4 -- 0
*/
/*n = 4;
1--

*/