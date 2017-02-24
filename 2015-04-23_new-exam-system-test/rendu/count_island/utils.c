/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 10:47:19 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 11:33:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *string)
{
	while (*string)
	{
		ft_putchar(*string);
		string++;
	}
}

void			ft_putnbr(int number)
{
	if (number > 9)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}

void			ft_bzero(char *source, size_t length)
{
	size_t		i;

	i = 0;
	while (i < length)
	{
		source[i] = '\0';
		i++;
	}
}

size_t			ft_strlen(char *string)
{
	size_t			length;

	length = 0;
	while (*string)
	{
		length++;
		string++;
	}
	return (length);
}
