/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:36:39 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/10 11:26:38 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(int ac, char **av)
{
	int		c;

	c = 1;
	while (ac > 1)
	{
		ft_putstr(av[c]);
		write(1, "\n", 1);
		c++;
		ac--;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	while (a < argc)
	{
		b = 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) < 0)
			{
				temp = argv[a];
				argv[a] = argv[b];
				argv[b] = temp;
			}
			b++;
		}
		a++;
	}
	ft_print_params(argc, argv);
	return (0);
}
