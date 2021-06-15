/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 18:17:11 by oavelar           #+#    #+#             */
/*   Updated: 2020/10/27 18:20:17 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *array, int n)
{
	int i;

	i = 0;
	while (++i < n)
		if (array[i - 1] >= array[i])
			return ;
	i = -1;
	while (++i < n)
		ft_putchar(array[i] + '0');
	if (array[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int i;
	int array[10];

	i = -1;
	while (++i < 10)
		array[i] = i;
	while (array[0] <= (10 - n) && n > 0 && n < 10)
	{
		print(array, n);
		array[n - 1]++;
		i = n;
		while (i > 1 && n > 1)
		{
			i--;
			if (array[i] >= 10)
			{
				array[i - 1]++;
				array[i] = 0;
			}
		}
	}
}
