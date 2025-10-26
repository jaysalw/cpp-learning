#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec(10);
    int i = 0;

    while (i < static_cast<int>(vec.size())) {
        i++;
        vec[i-1] = i;
        cout << " | " << vec.at(i-1);

        if(i == 3) {
            cout << " | Skipped";
            continue;
        }

        if(i == 8) {
            cout << endl << "Done";
            break;
        }
    }
    return 0;
}