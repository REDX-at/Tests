/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:32:33 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 14:46:29 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int mini_atoi(char  *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}
int is_prime(int n)
{
    int i = 2;
    if (n <= 1)
        return (0);
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void    putnbr(int  n)
{
    char dig;
    if (n >= 10)
        putnbr(n / 10);
    dig = n % 10 + '0';
    write(1, &dig, 1);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char    *str = argv[1];
        int prime = mini_atoi(str);
        if (prime < 0)
        {
            putnbr(0);
            write(1, "\n", 1);
            return (0);
        }
        int res = 0;
        while (prime)
        {
            if (is_prime(prime))
            {
                res += prime;
            }
            prime--;
        }
        putnbr(res);
    }
    write(1, "\n", 1);
}