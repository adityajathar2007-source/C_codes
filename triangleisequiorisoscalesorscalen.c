#include <stdio.h>

int main() {
    int side1, side2, side3;

    
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
        if (side1 == side2 && side2 == side3) {
            printf("This is an Equilateral triangle.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("This is an Isosceles triangle.\n");
        } else {
            printf("This is a Scalene triangle.\n");
        }
    } else {
        printf("Input sides do not form a valid triangle.\n");
    }

    return 0;
}
