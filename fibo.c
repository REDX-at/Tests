// 0   1   1   2   3   5

#include <stdio.h>

void fibonacci(int n)
{
    int i = 2;
    int first = 0;
    int second = 1;
    int next;

    printf("%d %d ", first, second);

    while (i <= n) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
        i++;
    }
    printf("\n");
}

int main()
{
    fibonacci(10);
}