/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:23:24 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/22 14:41:24 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char bit = 0;
    
    while (i < 8)
    {
        bit = (bit << 1) | ((octet >> i) & 1);
        
        i++;
    }
    return bit;
}

int main()
{
    unsigned char res = reverse_bits(2);
    printf("%c", res);
}