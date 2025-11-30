#include <string>
#include <iostream>

using namespace std;

int main() {
    string front;
    string back;
    string text = "Always laugh when you can, it\'s free medicine";

    front.assign(text);

    cout << endl << "Front: " << front << endl;

    front.assign(text, 0, 27);

    cout << endl << "Front: " << front << endl;

    back.assign(text, 27, text.size());

    cout << "Back: " << back << endl;

    return 0;
}