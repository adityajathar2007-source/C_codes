#include <stdio.h>

int main() {
    int units;
    float amount, surcharge, total_amount;

    
    printf("Enter the units consumed: ");
    scanf("%d", &units);

    
    if (units <= 50) {
        amount = units * 0.50;
    } else if (units <= 150) {
        amount = (50 * 0.50) + (units - 50) * 0.75;
    } else if (units <= 250) {
        amount = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
    } else {
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;
    }

    
    surcharge = amount * 0.20;

    
    total_amount = amount + surcharge;

    // Print the results
    printf("Electricity Bill Amount: %.2f\n", amount);
    printf("Surcharge Amount (20%%): %.2f\n", surcharge);
    printf("Total Electricity Bill: %.2f\n", total_amount);

    return 0;
}
