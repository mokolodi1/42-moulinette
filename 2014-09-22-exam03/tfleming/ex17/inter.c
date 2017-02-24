/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 15:08:30 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 17:08:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void		set_chars(char *look_through, int chars[])
{
	while (*look_through)
	{
		chars[(int)*look_through] = 1;
		look_through++;
	}
}

void		print_it(char *print_if, int chars[])
{
	while (*print_if)
	{
		if (chars[(int)*print_if])
		{
			ft_putchar(*print_if);
			chars[(int)*print_if] = 0;
		}
		print_if++;
	}
}

int			main(int argc, char **argv)
{
	int		chars[256];
	int		i;

	if (argc == 3)
	{
		i = 0;
		while (i < 256)
		{
			chars[i] = 0;
			i++;
		}
		set_chars(argv[2], chars);
		print_it(argv[1], chars);
	}
	ft_putchar('\n');
	return (0);
}
