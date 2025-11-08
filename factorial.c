#include <stdio.h>

int main() {
    int num;
    int i;
    int factorial = 1;

    printf("enter the number:  ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %lld\n", num, factorial);

    return 0;
}
