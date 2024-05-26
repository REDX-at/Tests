/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:40:27 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 10:43:35 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    put(char c)
{
    write(1, &c, 1);
}
void    putnbr(int n)
{
    if (n < 0)
        put('-');
    if (n >= 10)
        putnbr(n / 10);
    char dig = n % 10 + '0';
    put(dig);
}
int main(int argc, char **argv)
{
    if (argc == 1)
    {
        putnbr(0);
        put('\n');
        return (0);
    }
    putnbr(argc - 1);
    put('\n');
}