#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    // take input 
    for(int i=0; i<5; i+=1){
        int element;
        cin >> element;
        v.push_back(element);
        // cin >> v[i]; --> also take input like this but then we have to specify the size while declaration
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.begin()+3,9);
    // for-each loop
    for(int element: v){
        cout << element << " ";
    }
    v.erase(v.end()-3);
    cout << endl;
    // while loop
    int index = 0;
    while(index < v.size()){
        cout << v[index] << " ";
        index++;
    }
    cout << endl;
    return 0; 
}