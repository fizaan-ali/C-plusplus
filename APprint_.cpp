#include <iostream>
using namespace std;
int main(){
    // 4, 7, 10, 13...........
    // We can also print this by using extra variable!
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int a = 4; // a should be equal to the first value of series.
    for (int i=1; i<=n; i++){
        cout << a << " ";
        a += 3; // Here, we have to increment by the difference between the consecutive numbers in the series
    }
    //The loop runs 'n' times printing the required series by incrementing the 
    // difference in each step!
    return 0;
}