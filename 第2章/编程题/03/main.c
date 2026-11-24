#include <stdio.h>

#define PI 3.14159

int main()
{
    int r = 0;

    printf("please input r:");
    scanf("%d", &r);

    float volume = (4.0f / 3.0f) * PI * r * r * r;

    printf("volume=%f\n", volume);

    return 0;
}
