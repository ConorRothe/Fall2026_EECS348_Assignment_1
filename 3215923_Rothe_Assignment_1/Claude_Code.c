#include <stdio.h>

int main() {
    int secret = 7;   // fixed secret number
    int guess;
    int attempts = 3;
    int won = 0;

    printf("Guess the secret number (between 1 and 10). You have %d tries.\n", attempts);

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d/%d - Enter your guess: ", i, attempts);
        scanf("%d", &guess);

        if (guess == secret) {
            won = 1;
            break;
        } else if (guess > secret) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }
    }

    if (won) {
        printf("Congratulations! You guessed the secret number.\n");
    } else {
        printf("Sorry, you're out of guesses. The secret number was %d.\n", secret);
    }

    return 0;
}
