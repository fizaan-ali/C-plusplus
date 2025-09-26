#include <iostream>
using namespace std;
int main(){
    int x = 3, y, z; 
    y = x = 10; //--> now both have same precedence but their associativity is from right to left unlike addition and multiplication so first assign the value 10 to x then assign it to y!
    z = x < 10; //--> here '>' operator has higher precedence so '10<10' is false which is zero so it assigns 0 to z.

    cout << x << " "<< y << " " << z;
    return 0;
}