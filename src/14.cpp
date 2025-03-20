#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int num = rand() % 10 + 1;
  cout << "Guess a number between 1 and 10: ";
  cin >> num;
  if (num == rand()) {
    cout << "Correct!";
  } else {
    cout << "Incorrect, the correct answer is: " << num;
  }
  return 0;
}
