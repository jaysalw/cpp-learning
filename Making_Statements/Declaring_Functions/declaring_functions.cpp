#include <iostream>

using namespace std;

float bodyTempC();
float bodyTempF();

int main() {
    cout << "Celsius: " << bodyTempC() << " C" << endl;
    cout << "Fahrenheit: " << bodyTempF() << " F" << endl;
    return 0;
}

float bodyTempC() {
    float temperature = 37.0;
    return temperature;
}
float bodyTempF() {
    float temperature = 98.6;
    return temperature;
}