#include <stdio.h>

void fahrToCel(int lower, int upper, int step);

int main()
{
    fahrToCel(0, 200, 20);
    return 0;
}

void fahrToCel(int lower, int upper, int step)
{
    float fahr;
    printf("Fahr Celsius\n");
    for (fahr = lower; fahr <= upper; fahr = fahr + step)
        printf("%3.0f %6.1f\n", fahr, 5.0 * (fahr -32) / 9.0);
}
