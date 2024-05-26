/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:49:50 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 14:18:37 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	dig_count(int n)
{
	int	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int n = dig_count(nbr);
	int s = 0;
	char	*res = malloc(sizeof(char) * n + 1);
	res[n] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		res[0] = '-';
		s = 1;
	}
	while (n)
	{
		res[--n] = nbr % 10 + '0';
		nbr /= 10;
	}
	return(res);
}

int main()
{
	char	*res = ft_itoa(0);
	printf("res : %s\n", res);
}