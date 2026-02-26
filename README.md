# Advanced Number Guessing Game in C (v2.0)

A sophisticated command-line game developed to demonstrate intermediate C programming concepts. This project has evolved from a basic script into a structured application with persistent data storage and dynamic difficulty settings.

## 🌟 New & Advanced Features
* **Difficulty Levels:** Choose between Easy (1-50), Medium (1-100), and Hard (1-500) modes.
* **Persistent High Scores:** Player names and scores are saved into a `highscores.txt` file using C File I/O.
* **Structured Data:** Implementation of `struct` to manage player information efficiently.
* **Dynamic Lives:** Attempt limits change based on the selected difficulty level.

## 🛠️ Technical Concepts Applied
* **File Handling (I/O):** Using `fopen`, `fprintf`, and `fgets` to read/write data to external files.
* **Structures (Structs):** Custom data types to group player-related variables.
* **Control Flow:** Advanced use of `switch-case` for menu navigation and `do-while` for game logic.
* **Memory Safety:** Initializing variables to avoid garbage values (e.g., `attempts = 0`).

## 📋 How to Play
1. Compile the code:
   ```bash
   gcc guessingnumber.c -o GuessingGame
