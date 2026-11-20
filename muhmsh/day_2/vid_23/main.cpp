#include <iostream>
using namespace std;
main()
{

    cout << "================================\n";

    int a;
    double b = 20.5;
    a = b;
    cout << a << "\n";
    cout << sizeof(a) << endl;

    cout << "================================\n";

    cout << "================================\n";
    char c = 'C';
    int d = 20;
    cout << c + d << endl;

    cout << "================================\n";

    cout << "================================\n";
    int e = 20;
    double f = 20.5;
    cout << e + f << "\n";
    cout << sizeof(e + f) << endl;

    cout << "================================\n";

    cout << "================================\n";
    int g = 20;
    double h = 20.5;
    cout << g + int(h) << "\n";
    cout << sizeof(g + int(h)) << endl;

    cout << "================================\n";

    return 0;
}