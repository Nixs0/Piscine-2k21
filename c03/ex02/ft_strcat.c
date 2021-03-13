/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:43:31 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/08 09:22:26 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dest_counter;

	i = 0;
	dest_counter = 0;
	while (dest[dest_counter] != '\0')
		dest_counter++;
	while (src[i] != '\0')
	{
		dest[i + dest_counter] = src[i];
		i++;
	}
	dest[i + dest_counter] = '\0';
	return (dest);
}
