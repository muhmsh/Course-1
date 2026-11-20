#include <iostream>
using namespace std;
int main()
{

    cout << 10 + 10 << "\n";
    cout << sizeof(10 + 10) << "\n";
    cout << 10.5f + 9.5f << "\n";
    cout << sizeof(10.5f + 9.5f) << "\n";
    cout << 10.5 + 9.5 << "\n";
    cout << sizeof(10.5 + 9.5) << endl;
    cout << "=================================\n";
    cout << 10.5 + 9.5 << "\n";
    cout << sizeof(int(10.5 + 9.5)) << "\n";

    cout << 100 - 50 << endl;
    cout << 100 - -50 << endl;
    cout << 10 * 5 << "\n";
    cout << 20 / 5 << "\n";
    cout << 12 / 5 << "\n";
    cout << 12.f / 5.f << "\n";
    cout << 12.f / 5 << "\n";
    cout << 20 % 5 << endl;
    cout << 22 % 5 << endl;
}