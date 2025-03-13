#include <iostream>
using namespace std;
int main() {
	// Generate a random number between 1 and 10
	srand(time(0));
	int randNum = rand() % 10 + 1;

	// Ask the user to guess the number
	cout << "Guess a number between 1 and 10: ";
	int guess;
	cin >> guess;

	// Check if the guess is correct
	if (guess == randNum) {
		cout << "You got it right! The number was " << randNum << endl;
	} else {
		cout << "Sorry, you didn't get it this time. The number was " << randNum << endl;
	}

	return 0;
}
