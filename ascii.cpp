#include <iostream>
using namespace std;
int main(){
    for (int i=65; i<=90; i++){
        cout << i << "\t";
        char c = char(i);
        cout << c << endl;
    }
    return 0;
}