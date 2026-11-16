#include <iostream>
using namespace std;
int a = 40; // global variable

int seconde()
{

    cout << a << "this frome seconde";
    return 0;
}

int main()
{

    cout << a << endl;
    seconde();
    return 0;
}
