#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector <int> vec(3, 100);

    cout << "Vector Size: " << vec.size() << endl;
    cout << "Is empty?: " << vec.empty() << endl;
    cout << "First element: " << vec.at(0) << endl;
    return 0;
}