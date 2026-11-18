#include <iostream>
using namespace std;
int main()
{

    int num = 10;
    num = 10.5;
    cout << sizeof(num) << endl;
    cout << num << endl;

    double dob = 10;
    dob = 25.5;
    cout << sizeof(dob) << endl;
    cout << dob << endl;

    float fl = 10.4f + 10.6f;
    cout << sizeof(fl) << endl;
    cout << fl << endl;
}