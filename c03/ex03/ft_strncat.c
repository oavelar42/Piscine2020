/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 10:00:51 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/03 15:37:14 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				a;
	int				b;
	unsigned int	c;

	a = 0;
	b = 0;
	c = 0;
	while (dest[a] != '\0')
		++a;
	while (src[b] != '\0' && c < nb)
	{
		dest[a] = src[b];
		++a;
		++b;
		++c;
	}
	dest[a] = '\0';
	return (dest);
}
