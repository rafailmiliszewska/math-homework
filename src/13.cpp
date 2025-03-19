#include <iostream>
using namespace std;

int main() {
    // Prompt user to enter a number
    cout << "Enter a number: ";
    int num;
    cin >> num;

    // Calculate the sum of all the numbers from 1 to the entered number
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    // Print the result
    cout << "The sum is: " << sum << endl;

    return 0;
}
