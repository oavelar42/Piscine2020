/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:04:18 by oavelar           #+#    #+#             */
/*   Updated: 2020/10/26 17:39:20 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((char)(a / 10) + 48);
			ft_putchar((char)(a % 10) + 48);
			write(1, " ", 1);
			ft_putchar((char)(b / 10) + 48);
			ft_putchar((char)(b % 10) + 48);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
