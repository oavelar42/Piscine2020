/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:59:37 by oavelar           #+#    #+#             */
/*   Updated: 2020/10/28 17:21:54 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int c;

	c = 0;
	while (c < size / 2)
	{
		a = tab[c];
		tab[c] = tab[(size - 1) - c];
		tab[(size - 1) - c] = a;
		c++;
	}
}
