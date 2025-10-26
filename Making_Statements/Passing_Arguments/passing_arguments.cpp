#include <iostream>

using namespace std;

float fToC(float degreesF = 32.0);

int main() {
    float fahrenheit, celsius;

    cout << "Enter a Fahrenheit temperature:\t";
    cin >> fahrenheit;

    celsius = fToC(fahrenheit);

    cout << fahrenheit << " F is " << celsius << " C";

    cout << endl << "Freezing Point: " << fToC() << " C";
    return 0;
}

float fToC(float degreesF) {
    float degreesC = ((5.0/9.0) * (degreesF - 32.0));
    return degreesC;
}