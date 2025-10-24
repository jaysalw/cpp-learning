#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 1;

    cout << "Logical AND (&&):\t";
    cout << "( 1 && 1) " << (a && b) << "(true)";
    cout << endl << "Logical OR (||):\t";
    cout << "( 1 || 0) " << (a || 0) << "(true)";
    cout << endl << "Logical NOT (!):\t";
    cout << "(! 1) " << (!a) << "(false)";
    
    return 0;
}