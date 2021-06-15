/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:44:08 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/01 17:12:29 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	xy_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	unsigned char	*cursor;
	char	*hex_symbols;

	cursor = (unsigned char*)addr;
	hex_symbols = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		xy_putchar(hex_symbols[cursor[i] / 16]);
		xy_putchar(hex_symbols[cursor[i] % 16]);
		if ((i + 1) % 2 == 0)
			xy_putchar(' ');
		i++;
	}
	return (addr);
}
