#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main()
{
    int a = 20;
    int b = 30;

    printf("%d | %d\n", a, b);
    ft_swap(&a, &b);
    printf("%d | %d\n", a, b);
}