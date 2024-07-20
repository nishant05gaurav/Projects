/*

Here, we are generating a random number and asks the player to guess it.
If the player guess is higher than the actual numbet, the program displays "Lower number Please"
Similarly, tf the user guess is two low, the program prints "Higher number please".

When the user guesses the correct number, the origram displays the number of guesses the player
used to arrive at the number

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Here, we are initialising random number generator
    srand(time(0));

    // Generate random number b/w 1 and 100
    int Random_Number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int gussed;

    // Print the random number
    printf("Random nummber: %d\n", Random_Number);

    do
    {
        printf("Guess the number");
        scanf("%d", &gussed);
        if (gussed > Random_Number)
        {
            printf("Lower number please!\n");
        }
        else if (Random_Number < gussed)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }

        no_of_guesses++;
    } while (gussed != Random_Number);

    printf("You guessed the number %d guesses", no_of_guesses);
    return 0;
}
