#include <stdio.h>

// Enum declaration
enum Days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    long int a = 5;
    int d = 20;
    printf("%-6ld%d has taken a fork\n", a, d);
}