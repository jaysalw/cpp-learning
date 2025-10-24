#include <iostream>

using namespace std;

int main() {
    int num;        int nums[50];       float decimal;
    bool isTrue;    unsigned int max;   char letter;
    double pi;      short int number;   char letters[50];

    cout << "int size: " << sizeof(num);
    cout << "\t50 int size: " << sizeof(nums) << endl;
    cout << "short int zize: " << sizeof(number) << endl;
    cout << "unsigned int size: " << sizeof(max) << endl;
    
    return 0;
}