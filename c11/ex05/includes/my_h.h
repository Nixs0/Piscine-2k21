/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:36:55 by jkaruk-m          #+#    #+#             */
/*   Updated: 2021/02/24 13:48:02 by jkaruk-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H_H
# define MY_H_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		addition(int a, int b);
int		soustraction(int a, int b);
int		multiplication(int a, int b);
int		division(int a, int b);
int		modulo(int a, int b);

#endif
