#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int max = 100;
    int min = 1;
    int guess;
    int attempts = 0;   
    int lives = 10;      
    int secretNumber;
    
    srand(time(0));
    secretNumber = (rand() % max) + min;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between %d and %d.\n", min, max);
    printf("You have %d attempts to find it. Good luck!\n", lives);

    do {
        printf("\nEnter your guess (%d attempts left): ", lives);
        scanf("%d", &guess);
        
        attempts++;
        lives--;

        if (guess > secretNumber) {
            printf("Too high! Try a smaller number.\n");
        } 
        else if (guess < secretNumber) {
            printf("Too low! Try a larger number.\n");
        } 
        else {
            printf("\nCONGRATULATIONS! You found it! ??\n");
            break; 
        }

        if (lives == 0) {
            printf("\nGAME OVER! You've run out of attempts. ??\n");
            printf("The secret number was: %d\n", secretNumber);
            break;
        }

    } while (guess != secretNumber);

    printf("---------------------------\n");
    printf("Total attempts made: %d\n", attempts);
    printf("---------------------------\n");

    return 0;
}
