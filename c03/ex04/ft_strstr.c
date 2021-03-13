/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 09:23:08 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/10 14:35:39 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int to_find_counter;

	i = 0;
	if (!(*to_find))
		return (str);
	while (str[i])
	{
		to_find_counter = 0;
		while (str[i + to_find_counter] == to_find[to_find_counter])
		{
			if (to_find[to_find_counter + 1] == '\0')
				return (&str[i]);
			else
				to_find_counter++;
		}
		i++;
	}
	return (0);
}
