#include <iostream>
using namespace std;
int main(){
    // count vowels in a strng
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    int count = 0;
    for(int i=0; i<str.length(); i+=1){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }
    cout << "Vowel Count : " << count;
    return 0;
}
// fizaan ali shafiq mughal ==> 8
// also if you want to count capital vowels ==> 5 more conditions to go     