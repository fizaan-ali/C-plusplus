#include <iostream>
using namespace std;
int main(){
    float percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;
    if(percentage > 80 and percentage <=100)
        cout << "Very Good!";
    else if(percentage > 60 and percentage <=80)
        cout << "Good!";
    else if(percentage > 40 and percentage <= 60)
        cout << "Average!";
    else 
        cout << "Fail!"; 
    return 0;
}