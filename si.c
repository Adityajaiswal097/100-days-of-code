#include <stdio.h>
int main(){
#include <math.h>  // for pow() function


    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    // Input values
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100.0;

    // Calculate Compound Interest
    amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;

    // Output results
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

return 0;
}
