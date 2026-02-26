# Number Guessing Game in C

A simple yet interactive command-line game developed as part of my Computer Engineering journey. This project demonstrates fundamental programming concepts in C, such as loops, conditional logic, and random number generation.

## 🚀 Features
* **Dynamic Random Number:** Generates a new secret number every time you play using `time.h`.
* **Attempts System:** Players have a limited number of lives (7 attempts), adding a challenge to the game.
* **Smart Feedback:** Provides real-time "Too High" or "Too Low" hints to guide the player.
* **English Interface:** Completely written in English, suitable for a global developer portfolio.

## 🛠️ Concepts Applied
* **Randomization:** Utilizing `srand()` and `rand()` for unpredictable gameplay.
* **Control Flow:** Implementation of `do-while` loops and `if-else` statements.
* **User Input:** Handling data with `scanf` and `printf`.
* **Variables:** Managing game state with integer types.

## 📋 How to Run
1. Make sure you have a C compiler installed (like GCC).
2. Download the `NumberGuessingGame.c` file.
3. Compile the code using:
   ```bash
   gcc NumberGuessingGame.c -o GuessingGame
