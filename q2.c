#include <stdio.h>
int main()
{
    int x, y, multi = 1;
    printf("\nEnter the value of x and y: ");
    scanf("%d%d", &x, &y);
    for (int i = 0; i < y; i++)
    {
        multi *= x;
    }
    printf("\nx^y is %d", multi);
}