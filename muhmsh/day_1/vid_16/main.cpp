#include <iostream>
using namespace std;
int main()
{

    int num = 10;
    string name = " muhammed ";
    bool status = false;
    int num_one = 12;
    int num_two = 6;

    cout << sizeof(num) << endl;
    cout << sizeof(name) << endl;
    cout << sizeof(status) << endl;
    cout << num_one / num_two;
    cout << name / num_one; // هاد لانو المتغيرات من انواع مختلفة
}