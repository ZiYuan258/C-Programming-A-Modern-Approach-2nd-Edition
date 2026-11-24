#include <stdio.h>

int main()
{
    float loan = 0.0f, rate = 0.0f, monthly_payment = 0.0f;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("\n");

    float monthly_rate = rate / 100 / 12;
    float loan1 = loan - monthly_payment + loan * monthly_rate;
    float loan2 = loan1 - monthly_payment + loan1 * monthly_rate;
    float loan3 = loan2 - monthly_payment + loan2 * monthly_rate;

    printf("Balance remaining after first payment: $%.2f\n", loan1);
    printf("Balance remaining after second payment: $%.2f\n", loan2);
    printf("Balance remaining after third payment: $%.2f\n", loan3);

    return 0;
}
