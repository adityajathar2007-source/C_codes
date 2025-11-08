#include <stdio.h>

int main() {
    int n;
    float marks, sum = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter mark %d: ", i+1);
        scanf("%f", &marks);
        sum += marks;
    }


    printf("Average = %.2f\n", sum/n);
    
    return 0;

}
