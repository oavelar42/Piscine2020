/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:41:03 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/04 15:00:28 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar1(char c)
{
	write(1, &c, 1);
}

int		error(char *str)
{
	int	i;
	int	j;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			++j;
		}
		++i;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	display(int nbr, char *str, unsigned int str_length)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		ft_putchar1('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= str_length)
		display(nb / str_length, str, str_length);
	ft_putchar1(str[nb % str_length]);
}

void	ft_putnbr_base(int nbr, char *str)
{
	unsigned int	str_length;

	str_length = 2;
	str_length = error(str);
	if (!str_length)
		return ;
	display(nbr, str, str_length);
}
