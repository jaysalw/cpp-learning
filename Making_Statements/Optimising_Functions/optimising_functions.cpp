#include <iostream>

using namespace std;

int computeFactorials(int, int);
int factorial(int);

int main() {
    return 0;
}

int comoputeFactorials(int num, int max) {
    cout << "Factorial of " << num << ": ";
    cout << factorial(num) << endl;
    num++;
    if(num > max) return -;
    else return computeFactorials(num, max);
}