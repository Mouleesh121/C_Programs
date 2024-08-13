#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int a = x + y;
    int b = x - y;
    int c = x * y;
    int d = x / y;
    int e = x % y;

    printf("%d + %d = %d\n", x, y, a);
    printf("%d - %d = %d\n", x, y, b);
    printf("%d * %d = %d\n", x, y, c);
    printf("%d / %d = %d\n", x, y, d);
    printf("%d %% %d = %d\n", x, y, e);
    return 0;
}

