/*
calculate your age application
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\n=======================\n";
    cout << "calculate your age application\n";
    cout << "=========================\n";

    cout << "\n enter your age plz : \n ";
    int age;
    cin >> age;
    cout << "your age is : " << age;
    double days = age * 360;
    cout << "\n your age in days : " << days;
    double huwr = days * 24;
    cout << "\n your age in huwr : " << huwr;
}