#include <iostream>
using namespace std;
int main(){
    string s = "Baloon";
    cout << s << endl;
    s.push_back('a'); // ADD  ONE CHARACTER
    cout << s << endl;
    s.pop_back(); // REMOVE ONE CHARACTER
    cout << s << endl;
    s.append(" hot.");
    cout << s << s.length() << endl;
    s.clear(); // empty the string
    cout << s << s.length() << endl;
    return 0;
}