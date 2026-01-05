#include <stdlib.h>
#include <time.h> // For random number generator seed
#include <stdio.h>

int main(){
    int randomNumber = 0;
    int guess = 0;
    int maxNumGuess;
    time_t t;

    //Initialize random number generator
    srand((unsigned) time(&t));

    //get the random number
    randomNumber= rand() %21;

    printf("\n Guessing game.");
    printf("\n I have chosen a number between 0 and 20, which you must guess.\n");

    for(maxNumGuess=5; maxNumGuess>0; maxNumGuess--){
        printf("\nYou have %d tr%s left.", maxNumGuess, maxNumGuess== 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if(guess== randomNumber){
            printf("\nCongratulations.");
            break;
        }else if (guess <0 || guess>20){
            printf("\nI said the number is between 0 and 20.\n");
        }
        else if (randomNumber > guess){
            printf("Sorry, %d is wrong. My number is greater.",guess);
        }
        else if(randomNumber < guess){
            printf("Sorry, %d is wrong. My number is lower.",guess);
        }
    }
    printf("\n You have had five tries and failed. The number was %d\n", randomNumber);
    return 0;
}

