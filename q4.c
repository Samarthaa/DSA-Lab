#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int div(int a, int b);
int main()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nAddition = %d", add(a, b));
    printf("\nSubtraction = %d", sub(a, b));
    printf("\nMultiplication = %d", multi(a, b));
    printf("\nDivision = %d", div(a, b));
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}