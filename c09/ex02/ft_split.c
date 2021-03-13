/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:29:07 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/21 10:45:12 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_get_total_len(char *str, char *charset)
{
	int i;
	int letters;
	int words;

	i = 0;
	words = 0;
	while (str[i] && is_in_charset(str[i], charset))
		i++;
	while (str[i])
	{
		letters = 0;
		while (str[i + letters] && !is_in_charset(str[i + letters], charset))
			letters++;
		if (letters != 0)
		{
			i = i + letters;
			words++;
			continue;
		}
		i++;
	}
	return (words);
}

char	*ft_strdup(char *str, int index, int len)
{
	int		i;
	char	*copied;

	i = 0;
	if (!(copied = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		copied[i] = str[index];
		i++;
		index++;
	}
	copied[i] = 0;
	return (copied);
}

void	ft_fill_tab(char ***tab, char *str, char *charset)
{
	int i;
	int word;
	int tab_index;

	i = 0;
	tab_index = 0;
	while (str[i] && is_in_charset(str[i], charset))
		i++;
	while (str[i])
	{
		word = 0;
		while (str[i + word] && !is_in_charset(str[i + word], charset))
			word++;
		if (word != 0)
		{
			(*tab)[tab_index] = ft_strdup(str, i, word);
			i = i + word;
			tab_index++;
			continue;
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		total_len;
	char	**tab;

	total_len = ft_get_total_len(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * (total_len + 1))))
		return (NULL);
	ft_fill_tab(&tab, str, charset);
	tab[total_len] = NULL;
	return (tab);
}
