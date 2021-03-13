/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:58:23 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/21 15:37:06 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;
	int len;

	i = 0;
	len = (max - min);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * len)))
		return (-1);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}
