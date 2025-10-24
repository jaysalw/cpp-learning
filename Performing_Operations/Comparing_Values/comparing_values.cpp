#include <iostream>

using namespace std;

int main() {
    int nil = 0, num = 0, max = 1; 
    char cap = 'A', low = 'a';

    cout << "Equality comparisons:\t";
    cout << "( == 0) " << (nil == num) << "(true)";
    cout << "(A == a) " << (cap == low) << "(false)";

    cout << endl << "Inequality comparisons:\t";
    cout << "( != 0) " << (nil != num) << "(false)";
    cout << endl << "Greater comparisons:\t";
    cout << "( 1 > 0) " << (max > nil) << "(true)";
    cout << endl << "Lesser comparisons:\t";
    cout << "( 0 < 1) " << (nil < max) << "(true)";
    cout << endl << "Greater or equal comparisons:\t";
    cout << "( 1 >= 1) " << (max >= max) << "(true)";
    cout << endl << "Lesser or equal comparisons:\t";
    cout << "( 0 <= 1) " << (nil <= max) << "(true)";

    return 0;
}