#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    int secretNumber, guess, attempts = 0;

    cout << " Welcome to the Number Guessing Game!\n";
    cout << "I have picked a number between 1 and 100. Can you guess it?\n";

    // Seed the random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << " Congratulations! You guessed it in " << attempts << " tries.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
