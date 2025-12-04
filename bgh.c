#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;
    float percentage;

    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
