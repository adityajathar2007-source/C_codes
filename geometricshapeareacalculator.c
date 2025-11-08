#include <stdio.h>

int main() {
    int choice;
    float area;
    
    printf("Shape Area Calculator\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            float radius;
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159f * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;
        }
        case 2: {
            float length, width;
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        }
        case 3: {
            float base, height;
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5f * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            break;
    }

    return 0;
}
