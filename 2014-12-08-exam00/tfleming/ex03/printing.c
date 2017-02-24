/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:54:59 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 11:29:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *string)
{
	size_t		i;

	i = 0;
	while (string[i])
	{
		ft_putchar(string[i]);
		i++;
	}
}

void		ft_putword(char *string)
{
	size_t		i;

	i = 0;
	while (string[i] && !is_space(string[i]))
	{
		ft_putchar(string[i]);
		i++;
	}
}
