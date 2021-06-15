/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:13:21 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/06 17:54:18 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb == 1 || nb < 0)
		return (0);
	i = 3;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb != 1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (nb);
}

int	main(void)
{
	int	index;

	index = 0;
	while (index < 10)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", 0, ft_find_next_prime(10));
}
