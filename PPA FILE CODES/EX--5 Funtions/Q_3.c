#include <stdio.h>

int multiply(int x, int y)
{
    printf("Multiply is %d", x * y);
}

int main()
{
    int a, b;
    printf("ENTER TWO NUMBER -->");
    scanf("%d %d", &a, &b);

    multiply(a, b);

    return 0;
}