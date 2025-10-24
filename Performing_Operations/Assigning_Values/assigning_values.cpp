#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Assigning Values:" << endl;
    cout << "a = " << (a = 8) << " b = " << (b = 4);

    cout << endl << "Add & Assignn:\t\t" ;
    cout << endl << "a += b:\t" << (a += b);
    cout << endl << "Subtract & Assign:\t";
    cout << endl << "a -= b:\t" << (a -= b);
    cout << endl << "Multiply & Assign:\t";
    cout << endl << "a *= b:\t" << (a *= b);
    cout << endl << "Divide & Assign:\t";
    cout << endl << "a /= b:\t" << (a /= b);
    cout << endl << "Modulus & Assign:\t";
    cout << endl << "a %= b:\t" << (a %= b);
    
    return 0;
}