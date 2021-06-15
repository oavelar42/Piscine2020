/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oavelar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:59:10 by oavelar           #+#    #+#             */
/*   Updated: 2020/10/31 11:58:10 by oavelar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_lower(char c)
{
	int c_int;

	c_int = c + 0;
	if (c_int >= 97 && c_int <= 122)
	{
		return (1);
	}
	return (0);
}

int		is_alpha_upper(char c)
{
	int c_int;

	c_int = c + 0;
	if (c_int >= 65 && c_int <= 90)
	{
		return (1);
	}
	return (0);
}

int		not_alpha_numeric(char c)
{
	int c_int;

	c_int = c + 0;
	if (c_int < 48 || c_int > 122)
	{
		return (1);
	}
	else if (c_int >= 58 && c_int <= 64)
	{
		return (1);
	}
	else if (c_int >= 91 && c_int <= 96)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (not_alpha_numeric(str[i - 1]) && is_alpha_lower(str[i]))
		{
			str[i] = str[i] - 32;
		}
		else if (is_alpha_upper(str[i]) && not_alpha_numeric(str[i - 1]) == 0)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			str[i] = str[i];
		}
		++i;
	}
	return (str);
}
