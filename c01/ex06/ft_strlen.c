/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 09:46:53 by oavelar           #+#    #+#             */
/*   Updated: 2020/10/28 17:21:20 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (1)
	{
		if (str[a] == '\0')
		{
			return (a);
		}
		a++;
	}
}
