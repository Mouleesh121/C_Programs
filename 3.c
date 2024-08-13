#include <stdio.h>

int main() {
    int a, b, c, Sum;
    float Avg;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    Sum = a + b + c;
    printf("Sum of %d, %d, and %d is %d\n", a, b, c, Sum);
    Avg = Sum / 3.0;
    printf("Average of %d, %d, and %d is %.2f\n", a, b, c, Avg);

    return 0;
}

