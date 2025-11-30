#include <string>
#include <iostream>

using namespace std;

int main() {
    string text = "I can resist anything but temptation.";
    int num;

    num = text.find("resist", 0);
    cout << "\n\"resist\" result: " << num << endl;

    num = text.find("absent", 0);
    cout << "\"absent\" result: " << num << endl;

    num = text.find_first_of("If");
    cout << "\nFirst I:\t" << num << endl;

    return 0;
}