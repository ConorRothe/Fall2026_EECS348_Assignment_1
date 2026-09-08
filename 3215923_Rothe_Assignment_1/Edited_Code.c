//EECS 348 Assignment 1
//C program with secret number 1-10 and allows the user 3 guesses
//None, depends on the users choice
//Terminal output between the user and program
//No collaborators
//Sources: Chatgpt and Claude along with some help from google
//Conor Rothe

#include <stdio.h>

int main() {
    int secret = 7;   // fixed secret number
    int guess;        // stores users guesses

    printf("Guess the secret number between 1 and 10!\n");
    printf("You have 3 guesses.\n");   //These two lines prints the game and number of guesses

    for (int i = 1; i <= 3; i++) {   //runs a loop starting with i = 1
        printf("Attempt %d/3 - Enter your guess: ", i);   //prints the current attempt number
        
        if (scanf("%d", &guess) != 1) {    //makes sure it is a valid guess
            printf("Invalid input! Please enter an integer.\n");   //gives a error handling message
            
            while(getchar() != '\n');  //clears invalid inputs
            i--;       //doesnt count invalid input as guess
            continue;   //prompts again
        }

        if (guess == secret) {     // if the guessed number = secret number it runs
            printf("Congradulations! You guessed the secret number.\n");  //prints a congradulations screen
            return 0;     // Exits on win
        } else if (guess > secret) {  //if the guess is too high it runs
            printf("Too high!\n");    //prints it was too high
        } else {            //other condition is too low
            printf("Too low!\n");     //prints it was too low
        }
    }

    printf("Sorry, you're out of guesses, the secret number was %d.\n", secret); //prints a loss screen

    return 0;
}
