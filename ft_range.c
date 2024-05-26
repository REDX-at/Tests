/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:12:06 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 10:17:38 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i = 0;
	int	len = end - start;
	int	*tab = (int *)malloc(sizeof(int) * len + 1);

	while (i <= len)
	{
		if (start < end)
		{
			tab[i] = start;
			start++;
			i++;
		}
		else
		{
			tab[i] = start;
			start--;
			i++;	
		}
	}
	return (tab);
}

int	main()
{
	int	i = 0;
	int	*res = ft_range(-1, 2);
	while (i < 4)
	{
		printf("%d\n", res[i]);
		i++;
	}
	
}