#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int j;
        int word = 0;
        int count_sp = 0;
        while (argv[1][i])
        {
            i++;
        }
        int len = i;
        i = 0;
        j = 0;
        while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        {
            i++;
        }
        int tmp = i;
        while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
        {
            word++;
            i++;
        }
        char *alloc = malloc(sizeof(char) * word + 1);
        i = tmp;
        while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
        {
            alloc[j] = argv[1][i];
            i++;
            j++;
        }
        alloc[j] = '\0';
        while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        {
            i++;
        }

        while (argv[1][i] && argv[1][i] != '\0'  && i <= len)
        {
            count_sp = 0;
            while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t' ))
            {
                count_sp = 1;
                i++;
            }
            if (count_sp == 1 && (i + 1) <= len)
            {
                write(1, " ", 1);
            }
            if (argv[1][i])
            {
                write(1, &argv[1][i], 1);
            }
            i++;
        }
        j = 0;
        i = 0;
        count_sp= 1;

        while (argv[1][i] && argv[1][i] != '\0')
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                i++;
            }
            if (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t')
            {
                count_sp += 1;
            }
            i++;
        }

        if (count_sp != 1 && (argv[1][i - 1] != ' ' || argv[1][i - 1] != '\t'))
        {
            write(1, " ", 1);
        }

        while (alloc[j] != '\0')
        {
            write(1, &alloc[j], 1);
            j++;
        }
        free(alloc);
    }
    write(1, "\n", 1);
}
