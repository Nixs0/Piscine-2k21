/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:25:00 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/13 13:14:27 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int		main(int ac, char *av[])
{
	int i;

	i = 1;
	if (ac >= 2)
	{
		while (ac > 1)
		{
			ft_putstr(av[ac - 1]);
			write(1, "\n", 1);
			ac--;
		}
	}
	return (0);
}
