/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 09:25:47 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 09:38:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *string)
{
	size_t		i;

	i = 0;
	while (string[i])
	{
		ft_putchar(string[i]);
		i++;
	}
}

int			is_hidden(char *first, char *second)
{
	while (*first)
	{
		while (*second && *first == *second)
		{
			first++;
			second++;
		}
		if (!*second && *first)
			return (0);
		second++;
	}
	return (1);
}

int			main(int argc, char **argv)
{
	if (argc != 3)
		ft_putstr("\n");
	else
	{
		if (is_hidden(argv[1], argv[2]))
			ft_putstr("1");
		else
			ft_putstr("0");
		ft_putstr("\n");
	}
	return (0);
}
