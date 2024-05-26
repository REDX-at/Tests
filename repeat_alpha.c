/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:31:24 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 14:42:02 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	repeat_alph(char c)
{
	int d = c - 'a' + 1;
	while (d > 0)
	{
		write(1, &c, 1);
		d--;
	}
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*str = argv[1];
		int	i = 0;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				repeat_alph(str[i]);
			else
				write(1, &str[i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
}