#include <iostream>

using namespace std;

int main() {
    int nil = 0, num = 0, max = 1; 
    char cap = 'A', low = 'a';

    cout << "Equality comparisons:\t";
    cout << "( == 0) " << (nil == num) << "(true)";
    cout << "(A == a) " << (cap == low) << "(false)";

    return 0;
}