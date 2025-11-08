#include <stdio.h>

int main() {
    int choice;
    float amount, convertedAmount, rate;

    printf("Currency Converter to INR\n");
    printf("1. USD\n");
    printf("2. EUR\n");
    printf("3. GBP\n");
    printf("4. AUD\n");
    printf("5. JPY\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            rate = 88.73; 
            break;
        case 2:
            rate = 101.85; 
            break;
        case 3:
            rate = 115.52; 
            break;
        case 4:
            rate = 60.91; 
            break;
        case 5:
            rate = 0.56; 
            break;
        default:
            rate = 0;
            break;
    }

    if (rate == 0)
        printf("Invalid selection.\n");
    else {
        convertedAmount = amount * rate;
        printf("Converted amount: %.2f INR\n", convertedAmount);
    }

    return 0;
}
