/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 17:16:27 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/08 09:22:58 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int dest_counter;

	i = 0;
	dest_counter = 0;
	while (dest[dest_counter] != '\0')
		dest_counter++;
	while (src[i] != '\0' && (i < nb))
	{
		dest[i + dest_counter] = src[i];
		i++;
	}
	dest[i + dest_counter] = '\0';
	return (dest);
}
