#include <iostream>

using namespace std;

int main() {
    const char LETTER = 'A';
    int num = 8;
    
    if (num > 5) {
        cout << "Number is greater than 5" << endl;
    } else {
        cout << "Number is less than 5" << endl;
    }

    if (LETTER == 'A') { 
        cout << "Letter is A" << endl;
    }

    return 0;
}