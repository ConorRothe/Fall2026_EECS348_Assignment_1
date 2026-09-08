#include <stdio.h>

int main() {
    int secretNumber = 7;
    int guess;
    int attempts = 0;

    printf("Guess the secret number between 1 and 10!\n");
    printf("You have 3 guesses.\n");

    while (attempts < 3) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("Correct! You guessed the secret number!\n");
            break;
        }
        else if (guess > secretNumber) {
            printf("Too high!\n");
        }
        else {
            printf("Too low!\n");
        }
    }

    if (guess == secretNumber) {
        printf("You win!\n");
    }
    else {
        printf("You lose! The secret number was %d.\n", secretNumber);
    }

    return 0;
}