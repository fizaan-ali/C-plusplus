#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int a = (n/2) + 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i == a or j == a)
                cout << "* ";
            else 
                 cout << "  ";
        }
        cout << endl;
    }
    return 0;
}