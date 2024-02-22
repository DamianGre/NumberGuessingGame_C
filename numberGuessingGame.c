#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;

    int guessCount = 0;
    int userGuess;
    int cpuRandomNumber;

    srand(time(0));

    cpuRandomNumber = (rand() % MAX) + MIN;

    do
    {
        printf("\nEnter Your number: ");
        scanf("%d", &userGuess);

        if(userGuess > cpuRandomNumber){
            printf("To HIGH!\n");
        }else if(userGuess < cpuRandomNumber){
            printf("To low!\n");
        }else{
            printf("Correct!\n");
        }
        guessCount++;
    } while (userGuess != cpuRandomNumber);
    
    printf("@@@@@@@@@@@@@@@@@@@@\n");
    printf("YOU ARE A WINNER!\n");
    printf("The number was: %d\n", cpuRandomNumber);
    printf("Guess count: %d\n", guessCount);
    printf("@@@@@@@@@@@@@@@@@@@@");

    return 0;
}