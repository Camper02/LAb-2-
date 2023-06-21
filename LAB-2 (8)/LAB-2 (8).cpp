#include "LAB-2 (8).h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    /*try
    {
        Stack<int> steck= -1;
    }
    catch (const bad_alloc& e)
    {
        cerr << e.what() << endl;
    }*/
    Stack<int> steck = 5;
    cout << steck.push(1) << endl;
    cout << steck.push(2) << endl;
    cout << steck.push(3) << endl;
    cout << steck.push(4) << endl;
    cout << steck.push(5) << endl;
    try
    {
        cout << steck.push(6) << endl;
    }
    catch (const overflow_error& e)
    {
        cerr << e.what() << endl;
    }
    cout << steck.top() << endl;
    cout << steck.pop() << endl;
    cout << steck.pop() << endl;
    cout << steck.pop() << endl;
    cout << steck.pop() << endl;
    cout << steck.pop() << endl;
    try
    {
        cout << steck.pop() << endl;
    }
    catch (const out_of_range& e)
    {
        cerr << e.what() << endl;
    }
    try
    {
        cout << steck.top() << endl;
    }
    catch (const logic_error& e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}

