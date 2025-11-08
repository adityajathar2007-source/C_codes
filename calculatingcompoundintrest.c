#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, CI;

    printf("Enter principal, rate (%%) and time (years): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);


                CI = principal * pow((1 + rate / 100), time);
                printf("Compound Interest = %.2lf\n", CI - principal);
    return 0;
}
