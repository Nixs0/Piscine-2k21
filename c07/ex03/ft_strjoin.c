/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:11:08 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/18 13:17:38 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_get_total_len(char **strs, char *sep, int size)
{
	int i;
	int total_len;

	i = 0;
	total_len = 0;
	if (!*strs)
		return (0);
	while (i < size)
	{
		if (i > 0)
			total_len += ft_strlen(sep);
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

char	*ft_strcat(char *dest, char *src, int dest_count)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i + dest_count] = src[i];
		i++;
	}
	dest[i + dest_count] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*joined;
	int		dest_count;

	total_len = ft_get_total_len(strs, sep, size);
	if (!(joined = (char *)malloc(sizeof(char) * (total_len + 1))))
		return (malloc(1));
	i = 0;
	dest_count = 0;
	while (i < size)
	{
		ft_strcat(joined, strs[i], dest_count);
		dest_count = ft_strlen(joined);
		if (i < size - 1)
		{
			ft_strcat(joined, sep, dest_count);
			dest_count = ft_strlen(joined);
		}
		i++;
	}
	joined[total_len] = 0;
	return (joined);
}
