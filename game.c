#include <stdio.h>
#include <string.h>

int main()
{
    char player1[255];
    char player2[255];

    printf("player1 choose : ");
    scanf("%s", player1);
    printf("player2 choose : ");
    scanf("%s", player2);

    if (strcmp(player1, "p") == 0 && strcmp(player2, "r") == 0)
        printf("player 2 win\n");
    else if (strcmp(player1, "r") == 0 && strcmp(player2, "p") == 0)
        printf("player 1 win\n");
    else if (strcmp(player1, "p") == 0 && strcmp(player2, "p") == 0)
        printf("DRAW\n");
    else if (strcmp(player1, "c") == 0 && strcmp(player2, "r") == 0)
        printf("player 2 win\n");
    else if (strcmp(player1, "r") == 0 && strcmp(player2, "c") == 0)
        printf("player 1 win\n");

    return 0;
}