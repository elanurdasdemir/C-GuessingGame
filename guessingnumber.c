#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Player {
    char name[50];
    int score;
};

int main() {
    int maxNumber, guess, attempts = 0, lives, difficulty;
    int secretNumber;
    struct Player currentPlayer;
    FILE *file;

    srand(time(0));

    printf("=== Welcome to the Advanced Number Guessing Game! ===\n");
    printf("Enter your name: ");
    scanf("%s", currentPlayer.name);

    
    printf("\nSelect Difficulty:\n");
    printf("1. Easy (1-50, 10 lives)\n");
    printf("2. Medium (1-100, 7 lives)\n");
    printf("3. Hard (1-500, 5 lives)\n");
    printf("Choice: ");
    scanf("%d", &difficulty);

    switch(difficulty) {
        case 1: maxNumber = 50; lives = 10; break;
        case 3: maxNumber = 500; lives = 5; break;
        default: maxNumber = 100; lives = 7; break; 
    }

    secretNumber = (rand() % maxNumber) + 1;
    printf("\nI've picked a number between 1 and %d. Good luck, %s!\n", maxNumber, currentPlayer.name);

    
    do {
        printf("\nEnter guess (%d lives left): ", lives);
        scanf("%d", &guess);
        attempts++;
        lives--;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("\nBRAVO! You found it in %d attempts! \n", attempts);
            currentPlayer.score = attempts;

            
            file = fopen("highscores.txt", "a");
            if (file != NULL) {
                fprintf(file, "Player: %s | Attempts: %d\n", currentPlayer.name, attempts);
                fclose(file);
                printf("Your score has been saved to highscores.txt!\n");
            }
            break;
        }

        if (lives == 0) {
            printf("\nGAME OVER! The number was: %d \n", secretNumber);
            break;
        }
    } while (guess != secretNumber);

    
    printf("\n--- PREVIOUS HIGH SCORES ---\n");
    file = fopen("highscores.txt", "r");
    if (file != NULL) {
        char line[100];
        while (fgets(line, sizeof(line), file)) {
            printf("%s", line);
        }
        fclose(file);
    } else {
        printf("No high scores yet. Be the first!\n");
    }

    return 0;
}
