#include "LAB-2 (3).h"

using namespace std;

int main()
{
    Complex a(2, 3);
    Complex b(4, 5);
    cout << a << endl;
    cout << b << endl;

    Complex c = a + b;
    cout << c << endl;
    cout << a * b << endl;

    a += b;
    cout << a << endl;
    a *= b;
    cout << a << endl;

    cout << ++a << endl;
    cout << a++ << endl;
    cout << a << endl;

    Complex e;
    cin >> e;
    cout << e << endl;

    return 0;
}
