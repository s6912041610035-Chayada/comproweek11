#include <stdio.h>

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int Math = 80;
    int Physics = 75;
    int Chemistry = 85;

    float avg = average(Math, Physics, Chemistry);

    printf("Math: %d\n", Math);
    printf("Physics: %d\n", Physics);
    printf("Chemistry: %d\n", Chemistry);
    printf("Average: %.2f\n", avg);

    return 0;
}