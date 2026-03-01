/*We will write a program that generates a random number and asks
the player to guess it. If the player’s guess is higher than the
actual number, the program displays “Lower number please”. Similarly,
if the user’s guess is too low, the program prints “Higher number
please”.
When the user guesses the correct number, the program displays the
number of guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     // Seed the random number generator with current time
    srand(time(0));
    
    // Generate random number between 1 and 100
    int randomnumber = (rand() % 100) + 1;
    // print the random number for testing purposes
   // printf("Random number between 1 and 100: %d\n", randomnumber);
   int guess,attempts=0;
   printf("Welcome to the Number Guessing Game!\n");
   printf("I have selected a random number between 1 and 100. Can you guess it?\n");
   printf("You have been warned that this game can be quite addictive therefore, it is advised to play it only if you are unemployed\n");
   do {
    printf("Enter your guess:");
    scanf("%d",&guess);
    attempts++;
    if(guess>randomnumber){
        printf("Too high! Try a lower number.\n");
    }
    else if (guess<randomnumber){
        printf("Too low! Try a higher number.\n");
    }
    else {
        printf("Congratulations! You've guessed the number in %d attempts.\n", attempts);
    }
   }while(guess!=randomnumber);
return 0;
}