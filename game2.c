#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    

int main()
{
    int user, computer;
    char choice;
    int userScore = 0, compScore = 0;
    
    srand(time(0));   // random seed

    do {
        printf("\n===== Rock Paper Scissors =====\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");

        printf("Enter your choice: ");
        scanf("%d", &user);

        computer = rand() % 3 + 1;   // 1–3 random

        // Show computer choice
        printf("Computer chose: ");
        if (computer == 1) printf("Rock\n");
        else if (computer == 2) printf("Paper\n");
        else printf("Scissors\n");

        // Game logic
        if (user == computer) {
            printf("It's a Draw!\n");
        }
        else if ((user == 1 && computer == 3) ||
                 (user == 2 && computer == 1) ||
                 (user == 3 && computer == 2)) {
            printf("You Win!\n");
            userScore++;
        }
        else {
            printf("Computer Wins!\n");
            compScore++;
        }

        printf("Score → You: %d | Computer: %d\n", userScore, compScore);

        printf("Play again? (y/n): ");
        scanf(" %c", &choice);   // space important

    } while(choice == 'y' || choice == 'Y');

    printf("\nFinal Score → You: %d | Computer: %d\n", userScore, compScore);
    printf("Thanks for playing!\n");

    return 0;
}
