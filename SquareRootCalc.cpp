#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;
    cout << "Welcome to the Square Root Calculator" << endl;
    cout << "What is the number you would like to take the square root from?" << endl;
    cin >> num;
    cout << "The square root of " << num << " is " << sqrt(num) << endl;
}