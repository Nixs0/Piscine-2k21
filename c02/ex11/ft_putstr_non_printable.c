/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 08:45:19 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/09 12:15:25 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	convert_it_to_hexa(char c)
{
	char seizaine;
	char unite;
	char *base_hexa;

	base_hexa = "0123456789abcdef";
	seizaine = base_hexa[(c / 16)];
	unite = base_hexa[(c % 16)];
	write(1, "\\", 1);
	write(1, &seizaine, 1);
	write(1, &unite, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*src;

	src = (unsigned char*)str;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] < ' ' || src[i] > 126)
			convert_it_to_hexa(src[i]);
		else
			write(1, &src[i], 1);
		i++;
	}
}
