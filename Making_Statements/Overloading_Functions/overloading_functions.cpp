#include <iostream>

using namespace std;

float computeArea(float);

float computeArea(float, float);
float computeArea(char, float, float);

int main() {
    return 0;
}

float computeArea(float diameter) {
    float radius = (diameter / 2);
    return (3.141593 * (radius * radius));
}

float computeArea(float width, float height) {
    return(width * height);
}
