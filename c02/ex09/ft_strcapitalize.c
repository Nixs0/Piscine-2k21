/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 15:12:06 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/08 08:58:30 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	make_it_small(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

int		next_is_uppercase(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		c_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int maj;

	i = 0;
	maj = 1;
	make_it_small(str);
	while (str[i])
	{
		if (!(next_is_uppercase(str[i])))
			maj = 1;
		if (c_is_num(str[i]))
			maj = 0;
		if (maj && next_is_uppercase(str[i]))
		{
			str[i] = str[i] - 32;
			maj = 0;
		}
		i++;
	}
	return (str);
}
