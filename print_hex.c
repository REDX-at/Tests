/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:46:06 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 10:49:10 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	mini_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
	
}
void    print_hex(int n)
{
	char	res[] = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &res[n % 16], 1);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	num = mini_atoi(argv[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
}