#include <iostream>
#include <vector>
using namespace std;
int main(){
    // contiguous memory allocation
    // dynamic arrays --> resizable --> we can insert or delete elements
    // syntax: vector <datatype> vector-name;
    // or vector <datatype> vector-name(size);
    vector <int> v;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(1);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl; // capacity increases in power of 2 also compiler dependent
    v.resize(10);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.pop_back(); // delete end element
    v.pop_back();
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    return 0;
}
// size, resize, capacity, push-back, insert, begin, end, pop-back, erase, clear
//https://www.youtube.com/watch?v=-J6ZKSuaVds&list=PLxgZQoSe9cg0df_GxVjz3DD_Gck5tMXAd&index=16