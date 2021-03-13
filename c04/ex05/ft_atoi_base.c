/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:36:06 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/11 08:59:41 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		checkbase(char *base)
{
	int i;
	int j;
	int len_base;

	i = 0;
	len_base = ft_strlen(base);
	if (len_base == 0 || len_base == 1)
		return (0);
	while (base[i])
	{
		if ((base[i] >= 8 && base[i] <= 13) || base[i] == ' ')
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		nb_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	if (checkbase(base))
	{
		while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (str[i] && nb_in_base(str[i], base) != -1)
		{
			res = res * ft_strlen(base) + nb_in_base(str[i], base);
			i++;
		}
	}
	return (res * sign);
}
