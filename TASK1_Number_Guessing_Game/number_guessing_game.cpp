#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random number between a specified range
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    // Set the seed for the random number generator based on the current time
    srand(static_cast<unsigned int>(time(0)));

    // Declare variables
    const int minNumber = 1;
    const int maxNumber = 100;
    int secretNumber, guess, attempts = 0;

    // Generate a random number between minNumber and maxNumber
    secretNumber = generateRandomNumber(minNumber, maxNumber);

    // Game introduction
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the secret number between " << minNumber << " and " << maxNumber << "." << endl;

    do {
        // User input: Ask for a guess
        cout << "Enter your guess: ";
        cin >> guess;

        // Increment the attempts count
        attempts++;

        // Check if the guess is correct, too low, or too high
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low. Try again." << endl;
        } else {
            cout << "Too high. Try again." << endl;
        }

    } while (guess != secretNumber);

    return 0; // Return 0 to indicate successful execution
}