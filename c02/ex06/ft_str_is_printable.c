/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:53:01 by oavelar           #+#    #+#             */
/*   Updated: 2020/10/31 11:56:50 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_numb_char(char *tab)
{
	int counter;

	counter = 0;
	while (tab[counter])
	{
		counter++;
	}
	return (counter);
}

int	not_printable(char c)
{
	int c_int;

	c_int = c + 0;
	if (c_int < 32 || c_int > 127)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;
	int val_to_return;

	if (count_numb_char(str) > 0)
	{
		i = 0;
		while (str[i])
		{
			if (not_printable(str[i]))
			{
				val_to_return = 0;
				break ;
			}
			val_to_return = 1;
			++i;
		}
	}
	else
	{
		val_to_return = 1;
	}
	return (val_to_return);
}
