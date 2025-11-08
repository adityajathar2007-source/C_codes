#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = sqrt(n);
    if(s * s == n)
        printf("%d is a perfect square\n", n);
    else
        printf("%d is not a perfect square\n", n);
    return 0;
}
