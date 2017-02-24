/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 09:11:03 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 09:23:04 by exam             ###   ########.fr       */
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

int				is_hidden(char *first, char *second)
{
	while (*first && *second)
	{
		if (*first == *second)
			first++;
		second++;
	}
	if (!*first)
		return (1);
	return (0);
}

int				main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (is_hidden(argv[1], argv[2]))
			ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
