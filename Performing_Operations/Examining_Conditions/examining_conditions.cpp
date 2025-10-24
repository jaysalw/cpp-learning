#include <iostream>

using namespace std;

int main() { 
    int a, b, max;
    a = 1, b = 2;

    cout << "Variable a value is: ";
    cout << ((a != 1) ? "Not One" : (b == 2) ? "Two" : "One");
    cout << (( a % 2 != 0) ? " Odd" : " Even");
    cout << ((a > b) ? "A is greater" : "B is greater");

    return 0;
}