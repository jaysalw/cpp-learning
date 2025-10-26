#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "9";
    string term("9 ");
    string info = "Toys";

    char hue[4] = {'R', 'e', 'd', '\0'};
    string colour = hue;

    info = "Ballons";

    text += (term + colour + info);
    cout << endl << text << endl;
    return 0;
}