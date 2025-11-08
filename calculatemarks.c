#include <stdio.h>

int main() {
    int phy, bee, cp, math, japnese;
    float percentage;

    
    printf("Enter marks of five subjects (Physics, bee, cp, Math, japnese): ");
    scanf("%d%d%d%d%d", &phy, &bee, &cp, &math, &japnese);

    
    percentage = (phy + bee + cp + math + japnese) / 5.0;

    printf("Percentage = %.2f%%\n", percentage);

   
    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else if (percentage >= 40)
        printf("Grade E\n");
    else
        printf("Grade F\n");

    return 0;
}
