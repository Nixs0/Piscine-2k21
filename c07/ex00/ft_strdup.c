/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:12:13 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/18 12:46:29 by jkaruk-m         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copied;

	i = 0;
	len = ft_strlen(src);
	if (!(copied = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (src[i])
	{
		copied[i] = src[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}
