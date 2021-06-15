/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 09:56:31 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/03 15:35:34 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while ((s1[a] == s2[a]) && s1[a] != '\0' && s2[a] != '\0')
	{
		++a;
	}
	return (s1[a] - s2[a]);
}