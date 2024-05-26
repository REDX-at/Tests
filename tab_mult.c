/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:18:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 10:39:44 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int	signe = 0;
	int	res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
		n = -n;
	if (n >= 10)
		ft_putnbr(n / 10);
	char	dig;
	dig = n % 10 + '0';
	ft_putchar(dig);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	num = ft_atoi(argv[1]);
		int	i = 1;
		while (i <= 9)
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar('*');
			ft_putchar(' ');
			ft_putnbr(num);
			ft_putchar(' ');
			ft_putchar('=');
			ft_putchar(' ');
			ft_putnbr(num * i);
			ft_putchar('\n');
			i++;
		}
		
	}
	write(1, "\n", 1);
}