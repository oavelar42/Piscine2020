/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:07:28 by oavelar           #+#    #+#             */
/*   Updated: 2020/10/29 09:40:26 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

static void	insert_n(int *tab, int pos)
{
	while (pos > 0 && tab[pos] < tab[pos - 1])
	{
		ft_swap(&(tab[pos]), &(tab[pos - 1]));
		pos--;
	}
}

void		ft_sort_int_tab(int *tab, int size)
{
	int pos;

	pos = 1;
	while (pos < size)
		insert_n(tab, pos++);
}
