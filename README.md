# Number Guessing Game in C

A simple console-based number guessing game written in C.

The program generates a random number between 1 and 100, and the user attempts to guess it. After each guess, the program provides feedback indicating whether the guess is too high or too low, until the correct number is guessed.

## Features
- Random number generation using `rand()` and `srand()`
- User input handling
- Feedback for each guess
- Attempt counter

## Concepts Used
- Control flow (`if-else`, `do-while`)
- Standard input/output
- Random number generation
- Basic C programming syntax

## How to Run

### Compile
```bash
gcc game.c -o game
