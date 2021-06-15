/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 09:11:24 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/10 16:14:29 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		firts_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlen(int size, char **strs)
{
	int	len;

	len = 0;
	while (size-- > 0)
		len += first_strlen(strs[size]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*join;

	join = (char*)malloc(sizeof(char) * (ft_strlen(size, strs)
				+ first_strlen(sep) * (size - (size == 0 ? 0 : 1) + 1)));
	if (join == NULL)
		return (NULL);
	j = 0;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
			join[j++] = strs[k][i++];
		i = 0;
		while (k != size - 1 && sep[i])
			join[j++] = sep[i++];
		k++;
	}
	join[j] = '\0';
	return (join);
}
