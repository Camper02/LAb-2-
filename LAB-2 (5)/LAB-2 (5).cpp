#include <iostream>
#include "LAB-2 (5).h"

using namespace std;

int main() {
    Vector<bool> vec;
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec.size() << endl;
    vec.erase(1, 2);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec.size() << endl;
    vec.insert(0, 1);
    cout << vec[1] << endl;
    vec[1] = 1;
    cout << vec[1] << endl;
    cout << vec.size() << endl;
    return 0;
}
