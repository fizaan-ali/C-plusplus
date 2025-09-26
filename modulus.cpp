#include <iostream>
using namespace std;
int main(){
    /*
    Modulus Operator:
    --> a % b = It gives us the remainder when a is divided 
    by b.
    e.g. 5 % 2 = 3 i.e. the remainder is 3 when 5 is 
    divided by 2.
    */

    //--> a % b = a if(a < b) --> e.g. 2 % 8 = 2 
    //--> a % a = 0 --> e.g. 5 % 5 = 0
    //--> a % -(b) = a % b --> e.g. 3 % -2 = 3 % 2 = 1
    //--> (-a) % b = -(a % b) --> e.g. -5%3 = -(5%3) = -2
    cout << 4 % 232 << endl;
    cout << 87 % 5 << endl;
    cout << 23 % -3 << endl;
    cout << -5 % 2 << endl;
    
    return 0;
}