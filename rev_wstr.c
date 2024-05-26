/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:20:52 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 13:15:06 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		char *str = argv[1];
		while (str[i])
			i++;
		int tmp = 0;
		int s = 0;
		int d = 0;
		int flag = 0;
		int flaga = 0;
		i--;
		char	*word = malloc(sizeof(char) * (i + 1));
		while (i >= 0)
		{
			d = 0;
			flag = 0;
			flaga = 0;
			while (i >= 0 && str[i] == ' ')
			{
				i--;
			}
			while (i >= 0 && str[i] != ' ')
			{
				flag = 1;
				i--;
				d++;
			}
			tmp = i;
			s = 0;
			while (d >= 0)
			{
				word[s] = str[tmp];
				if (word[s] != ' ' && word[s] != '\0')
					write(1, &word[s], 1);
				tmp++;
				s++;
				d--;
			}
			if (i > 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
}