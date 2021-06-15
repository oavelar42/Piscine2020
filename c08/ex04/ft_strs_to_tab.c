/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:57:06 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/07 22:58:13 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void				ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = (t_stock_str*)malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (0);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = (char*)malloc((stock[i].size + 1) * sizeof(char));
		stock[i].copy = (char*)malloc((stock[i].size + 1) * sizeof(char));
		if (stock[i].str == 0 || stock[i].copy == 0)
			return (0);
		ft_strcpy(stock[i].str, av[i]);
		ft_strcpy(stock[i].copy, av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
