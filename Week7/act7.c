#include <stdio.h>

void swap(int *a, int *b)
{
    int sw = *a;
    *a = *b;
    *b = sw;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}