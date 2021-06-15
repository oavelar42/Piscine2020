/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:10:08 by oavelar           #+#    #+#             */
/*   Updated: 2020/11/05 16:08:46 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	bin_search_sqrt(long unsigned int nb, unsigned int low, unsigned int up)
{
	long unsigned int	mid;

	mid = low + ((up - low) / 2);
	if (mid * mid == nb)
		return (mid);
	if (low > up)
		return (0);
	if (mid * mid < nb)
		return (bin_search_sqrt(nb, mid + 1, up));
	else
		return (bin_search_sqrt(nb, low, mid - 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (bin_search_sqrt(nb, 0, nb));
}
