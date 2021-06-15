/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:05:04 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/01 16:43:09 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	tmp;
	unsigned char	*cursor;
	char			*hex_symbols;

	hex_symbols = "0123456789abcdef";
	cursor = (unsigned char*)str;
	while (*cursor != '\0')
	{
		if (*cursor >= ' ' && *cursor <= '~')
			write(1, cursor, 1);
		else
		{
			ft_putchar('\\');
			tmp = *cursor / 16;
			ft_putchar(hex_symbols[tmp]);
			tmp = *cursor % 16;
			ft_putchar(hex_symbols[tmp]);
		}
		cursor++;
	}
}
