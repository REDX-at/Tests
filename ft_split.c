/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:49:22 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 12:11:52 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str)
{
	int i = 0;
	int wc = 0;
	int flag = 0;
	int sp = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n'))
		i++;
	while (str[i])
	{
		flag = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\n'))
		{
			i++;
			flag = 1;
		}
		if (str[i] == '\0')
			break;
		if (flag)
			wc++;
		i++;
		sp = 1;
	}
	if (sp)
		wc++;
	int twc = wc;
	char	**res = (char **)malloc(sizeof(char *) * wc + 1);
	res[wc] = NULL;
	wc = 0;
	i = 0;
	int d = 0;
	while (str[i])
	{
		d = 0;
		while ((str[i] == ' ' || str[i] == '\n'))
			i++;
		int j = i;
		while (str[i] && str[i] != ' ' && str[i] != '\n')
		{
			d++;
			i++;
		}
		if (str[i] == '\0')
			break;
		char *word = malloc(sizeof(char) * d + 1);
		sp = 0;
		while (sp < d)
		{
			word[sp] = str[j];
			sp++;
			j++;
		}
		res[wc] = word;
		wc++;
	}
	return (res);
}

int main()
{
	char **res = ft_split("\nalo \naimen abab asi han           ");
	int i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	
}