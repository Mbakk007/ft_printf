/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bakk <ael-bakk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:01:58 by ael-bakk          #+#    #+#             */
/*   Updated: 2025/11/15 20:04:31 by ael-bakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_pointer_size(void *ptr)
{
    int size;
    unsigned long long address = (unsigned long long)ptr;

    size = 0;
    size += ft_putstr_size("0x");
    size += ft_hex_size(address, 'x');
    return (size);
}
