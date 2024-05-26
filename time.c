#include <unistd.h>
#include <stdio.h>

int chrono_time(int n)
{
    int i = 0;
    while (i <= n)
    {
        printf("time : %d\n", i);
        i++;
        sleep(1);
    }
    printf("the chrono is done.");
    return n;
}

int main()
{
    int n;
    printf("Enter the time : ");
    scanf("%d", &n);
    int i = chrono_time(n);

}