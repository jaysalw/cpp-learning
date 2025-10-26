#include <iostream>

using namespace std;

float bodyTempC();
float bodyTempF();

int main() {
    cout << "Celsius: " << bodyTempC() << " C" << endl;
    cout << "Fahrenheit: " << bodyTempF() << " F" << endl;
    return 0;
}