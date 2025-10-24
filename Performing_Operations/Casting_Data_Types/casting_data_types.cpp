#include <iostream>

using namespace std;

int main() {
    int num = 7,        factor = 2;
    char letter = 'A';  float result = 0.0;

    cout << "Integer division" << (num / factor) << endl;

    result = (float) num / factor;
    cout << "Cast devision float: " << result << endl;

    num = static_cast<int>(result);
    cout << "Cast character int: " << num << endl;

    num = static_cast<int>(letter);
    cout << "Cast integer char: " << num << endl;

    return 0;
}