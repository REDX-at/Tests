/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:47:46 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/10 16:28:04 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "file.h"

int	ft_list_size(t_list *begin_list)
{
	int size = 0;

	while (begin_list)
	{
		size++;		
		begin_list = begin_list->next
	}
	
}

int main()
{
	char str[] = "255";
	int n = ft_atoi(str);
	ft_print_hex(n);
}