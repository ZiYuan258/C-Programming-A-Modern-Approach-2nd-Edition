#include <stdio.h>

int main()
{
    int dollars = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    int amount_20 = dollars / 20;
    int amount_10 = (dollars - amount_20 * 20) / 10;
    int amount_5 = (dollars - amount_20 * 20 - amount_10 * 10) / 5;
    int amount_1 = dollars - amount_20 * 20 - amount_10 * 10 - amount_5 * 5;

    printf("$20 bills: %d\n", amount_20);
    printf("$10 bills: %d\n", amount_10);
    printf("$5 bills: %d\n", amount_5);
    printf("$1 bills: %d\n", amount_1);

    return 0;
}
