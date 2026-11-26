#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &num1, &num2, &num3);

    printf("You entered: %d.%d.%d\n", num1, num2, num3);

    return 0;
}
