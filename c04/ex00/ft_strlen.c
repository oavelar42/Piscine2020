/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:32:49 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/03 16:53:27 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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
