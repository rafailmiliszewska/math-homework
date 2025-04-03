#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 3;
    int c = 10;

    if (a > b) {
        cout << "A is greater than B." << endl;
    } else if (b > c) {
        cout << "B is greater than C." << endl;
    } else {
        cout << "C is greater than A and B." << endl;
    }

    return 0;
}
