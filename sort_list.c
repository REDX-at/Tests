/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:12:20 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 12:15:48 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *temp;
    temp = lst;

    while (lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            int tmp;
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = temp;
        }
        else
            lst = lst->next;
    }
    lst = temp;
    return (lst);
}