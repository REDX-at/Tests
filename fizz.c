/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:43:00 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 11:47:56 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= 10)
		putnbr(n / 10);
	char dig = n % 10 + '0';
	write(1, &dig, 1);
}
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 5);
		else if (i % 3 == 0)
			write(1, "fizz", 5);
		else if (i % 5 == 0)
			write(1, "buzz", 5);
		else
			putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}