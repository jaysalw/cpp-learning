#include <iostream>

using namespace std;

int main() {
    int num = 1 + 4 * 3;

    cout << endl << "Default order: " << num;

    num = (1 + 4) * 3;
    cout << "\tForced order: " << num;

    num = 7 - 4 + 2;
    cout << endl << "Default direction: " << num;

    num = 7 - ( 4 + 2 );
    cout << "\tForced direction: " << num;
    
    return 0;
}