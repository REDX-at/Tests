/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:15:33 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 11:22:47 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
    int i = 7;
    unsigned char    dig;
    while (i >= 0)
    {
        dig = (octet >> i & 1) + '0';    
        write(1, &dig, 1);
        i--;
    }
}
int main()
{
    print_bits(2);
}