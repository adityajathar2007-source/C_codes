#include <stdio.h>

int main() {
    float cost_price, selling_price, difference;

    // Input cost price and selling price
    printf("Enter the Cost Price: ");
    scanf("%f", &cost_price);
    printf("Enter the Selling Price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        difference = selling_price - cost_price;
        printf("Profit: %.2f\n", difference);
    } else if (cost_price > selling_price) {
        difference = cost_price - selling_price;
        printf("Loss: %.2f\n", difference);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
