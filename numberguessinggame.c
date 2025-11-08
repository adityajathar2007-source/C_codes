#include <stdio.h>

int main() {
int number = 7;  
int guess;

printf("Guess the number (1-10): ");
scanf("%d", &guess);

    if (guess == number)
        printf("You win!\n");
     else
        printf("Wrong! The number was %d\n", number);

return 0;
}
