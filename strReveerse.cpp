#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s = "Fizaan";
    cout << s << endl;
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}
// reverse(s.begin()+1,s.begin()+3) --> try this