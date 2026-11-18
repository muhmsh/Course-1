
/*
the variable is like a data container we store this data
today s code is a about a product that allow me to print
a specific price for a product then the price itself after adding taxes
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "the price of the product is 200 \n";
    cout << "the price of the product after the taxes is" << 200 + 20;
    /*
    so instead of manually adding the code we use the variables
    so the syntax of writing of the variable
    --data type --variable name -- = the value
    */
    int price = 100;
    cout << "\nthe price of the product is " << price;
    cout << "\nthe price of the product after the taxes is " << price + 10;
    /*
    so if i got a variable and i want to update the value of it
    should i go from the declare section and type the new value?
    nh it is tottaly wronng
    so i should declare it first
    then i can update it
    int price = 199  (declare it)
    the i print some lines and i want a new value
    price = 200 (update the value)
    */
    price = 500;
    cout << "\nthe new price is " << price;
    return 0;
}
