#include <stdio.h>
int main()
{
    int a = 4;
    int *p1 = &a;
    printf("\nSize of int pointer = %ld", sizeof(*p1));
    char b = 'X';
    char *p2 = &b;
    printf("\nSize of char pointer = %ld", sizeof(*p2));
    float c = 3.14;
    float *p3 = &c;
    printf("\nSize of float pointer = %ld", sizeof(*p3));
    double d = 3.14;
    double *p4 = &d;
    printf("\nSize of double pointer = %ld", sizeof(*p4));
    long int e = 10.01;
    long int *p5 = &e;
    printf("\nSize of long int pointer = %ld", sizeof(*p5));
}