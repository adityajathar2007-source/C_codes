#include <stdio.h>

int main() {
    int angle1, angle2, angle3, sum;

    // Input all three angles
    printf("Enter three angles of a triangle: \n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Calculate sum of the angles
    sum = angle1 + angle2 + angle3;

    // Check if all angles are greater than 0 and sum is 180
    if (sum == 180 )
        printf("The triangle is valid.\n");
    else
        printf("The triangle is not valid.\n");

    return 0;
}
