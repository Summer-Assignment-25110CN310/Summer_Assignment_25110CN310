#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_num, guess, attempts = 0;
    
    // Current time ko seed lekar random number generator initialize kiya
    srand(time(0)); 
    secret_num = (rand() % 100) + 1; // 1 se 100 ke beech ka number

    printf("=== Welcome to the Number Guessing Game! ===\n");
    printf("Maine 1 se 100 ke beech ek number socha hai. Guess karo!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_num) {
            printf("Too High! Thoda chhota number try karo.\n");
        } else if (guess < secret_num) {
            printf("Too Low! Thoda bada number try karo.\n");
        } else {
            printf("\n🎉 Mubarak ho! Aapne %d attempts mein sahi guess kiya!\n", attempts);
        }
    } while (guess != secret_num);

    return 0;
}