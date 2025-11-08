#include <stdio.h>

int main() 
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age entered.\n");
    } else if (age <= 12) {
        printf("You are in the Childhood phase.\n");
    } else if (age <= 19) {
        printf("You are in the Teenage phase.\n");
    } else if (age <= 35) {
        printf("You are in the Young Adult phase.\n");
    } else if (age <= 55) {
        printf("You are in the Middle Age phase.\n");
    } else if (age <= 75) {
        printf("You are in the Senior phase.\n");
    } else {
        printf("You are in the Old Age phase.\n");
    }

    return 0;
}

