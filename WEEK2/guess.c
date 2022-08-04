#include <stdio.h>
#include <stdlib.h>

int main (void){
     int lucky = 4;
     int guess;
     int guessCount = 0;
     int guessLimit = 3;
     int outOfGuesses = 0;
     printf("Enter a guess: ");
          scanf("%d", &guess);

     while(guess != lucky && outOfGuesses == 0){
     if(guessCount < guessLimit-1){
          printf("Enter a guess: ");
          scanf("%d", &guess);
          guessCount++;
     }
     else {
          outOfGuesses = 1;
          }
     }

     if(outOfGuesses != 0){
          printf("You Lose!");
     }
     else {
          printf("You Win!");
}
}