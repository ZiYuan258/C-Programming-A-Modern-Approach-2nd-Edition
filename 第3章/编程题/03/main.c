#include <stdio.h>

int main()
{
    int GS1_prefix = 0, Group_identifier = 0, Publisher_code = 0, Item_reference = 0, Check_digit = 0;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1_prefix, &Group_identifier, &Publisher_code, &Item_reference, &Check_digit);

    printf("GS1 prefix: %d\n", GS1_prefix);
    printf("Group identifier: %d\n", Group_identifier);
    printf("Publisher code: %d\n", Publisher_code);
    printf("Item reference: %d\n", Item_reference);
    printf("Check digit: %d\n", Check_digit);

    return 0;
}
