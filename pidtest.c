/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pidtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:52:22 by aitaouss          #+#    #+#             */
/*   Updated: 2024/02/15 12:03:36 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t child_pid;
    printf("Before fork %d\n", getpid());

    child_pid = fork();
    waitpid(child_pid, NULL, 0);
    printf("After fork%d\n", getpid());
}