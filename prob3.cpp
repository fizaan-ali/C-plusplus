#include <iostream>
using namespace std;
int main(){

    // Find the highest common factor of a number (other than itself)
    //let's say 24 = 1*2*3*4*6*8*12*24 --> so second highest = 12
    int n;
    cout << "Enter a number: ";
    cin>> n;
    int f;
    for (int i=1; i<n; i++){// '<' for second highest  
        if(n%i==0) 
            f = i;
    }
    cout << "Second highest factor = " << f;
    return 0;
}