#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if all sides are positive
    if (side1 > 0 && side2 > 0 && side3 > 0) {
        // Verify the triangle inequality theorem
        if ((side1 + side2 > side3) && 
            (side2 + side3 > side1) && 
            (side1 + side3 > side2)) {
            printf("Triangle is valid.\n");
        } else {
            printf("Triangle is not valid.\n");
        }
    } 

    return 0;
}
