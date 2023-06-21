#include "LAB-2 (2).h"
#include <iostream>

using namespace std;

int main() 
{
    String s1;
    String s2;
    String s3;

    cin >> s1;
    cin >> s2;

    cout << (s1 > s2) << endl;
    cout << (s1 < s2) << endl;
    cout << (s1 == s2) << endl;

    cout << s1 << endl;
    cout << s2 << endl;
    s3 = s1 + s2;
    cout << s3 << endl;

    s1 += s2;
    cout << s1 << endl;

    char letter;
    cin >> letter;
    cout << s1.find(letter) << endl;

    cout << s1.length() << endl;
    cout << s1.at(7) << endl;
    cout << s1.c_str() << endl;
    cout << s1[0] << endl;
    s1[1] = 'k';
    cout << s1;
    return 0;
}
