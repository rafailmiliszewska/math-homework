#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is negative." << endl;
    }
    return 0;
}
