#include <iostream>
using namespace std;
int main(){
    /*
    The triangle is satisfied if sum of any two sides is greater 
    than the third side 
    --> a + b > c 
    --> b + c > a
    --> a + c > b 
    */
   float a , b , c;
   cout << "Enter the 1st number : ";
   cin >> a;
   cout << "Enter the 2nd number : ";
   cin >> b;
   cout << "Enter the 3rd number : ";
   cin >> c;

    if((a+b)>c and (b+c)>a and (a+c)>b){ // if(a+b>c && b+c>a && a+c>b)
        cout << "Triangle is satisfied!";
    }
    else{
        cout << "Triangle is not satisfied!";
    }
    return 0;
}