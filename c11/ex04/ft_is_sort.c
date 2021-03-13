/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:08:59 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/24 13:36:15 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int dir;

	i = 0;
	dir = 0;
	while (i < length - 1)
	{
		if (dir == 0)
			dir = f(tab[i], tab[i + 1]);
		else if (dir > 0 && (f(tab[i], tab[i + 1]) < 0))
			return (0);
		else if (dir < 0 && (f(tab[i], tab[i + 1]) > 0))
			return (0);
		i++;
	}
	return (1);
}
