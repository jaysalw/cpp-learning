#include <string>
#include <iostream>

using namespace std;

int main() {
    string lang = "C++";
    string term = "Programming";
    string text = "C++ Programming";

    cout << "Concatenated: " << (lang + term) << endl;
    cout << "Original: " << lang << endl;

    cout << "Appended: " << lang.append(term) << endl;
    cout << "Original: " << lang << endl >> endl;

    cout << "Differ: " << (lang == term) << endl;
    cout << "Match" << (lang == text) << endl;

    

    return 0;
}