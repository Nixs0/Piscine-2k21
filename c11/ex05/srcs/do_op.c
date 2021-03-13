/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:37:15 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/24 13:48:50 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <my_h.h>

void	make_operation(int a, int b, int (*operation)(int, int))
{
	ft_putnbr(operation(a, b));
	ft_putchar('\n');
}

void	do_op(char **av)
{
	if (*av[2] == '+')
		make_operation(ft_atoi(av[1]), ft_atoi(av[3]), addition);
	else if (*av[2] == '-')
		make_operation(ft_atoi(av[1]), ft_atoi(av[3]), soustraction);
	else if (*av[2] == '*')
		make_operation(ft_atoi(av[1]), ft_atoi(av[3]), multiplication);
	else if (*av[2] == '/')
	{
		if (ft_atoi(av[3]) == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return ;
		}
		make_operation(ft_atoi(av[1]), ft_atoi(av[3]), division);
	}
	else if (*av[2] == '%')
	{
		if (ft_atoi(av[3]) == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return ;
		}
		make_operation(ft_atoi(av[1]), ft_atoi(av[3]), modulo);
	}
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	else if (ft_strlen(av[2]) == 1 && (*av[2] == '+' || *av[2] == '-'
		|| *av[2] == '*' || *av[2] == '/' || *av[2] == '%'))
	{
		do_op(av);
	}
	else
		ft_putstr("0\n");
	return (0);
}
