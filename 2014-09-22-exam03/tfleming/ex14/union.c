/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 13:40:59 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 14:02:04 by exam             ###   ########.fr       */
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

void		combine(char *dest, char *a, char *b)
{
	while (*a)
	{
		*dest = *a;
		dest++;
		a++;
	}
	while (*b)
	{
		*dest = *b;
		dest++;
		b++;
	}
	*dest = '\0';
}

void		set_chars(char *big_one, int chars[])
{
	while (*big_one)
	{
		chars[(int)*big_one] = 1;
		big_one++;
	}
}

void		print_it(char *big_one, int chars[])
{
	while (*big_one)
	{
		if (chars[(int)*big_one])
		{
			ft_putchar(*big_one);
			chars[(int)*big_one] = 0;
		}
		big_one++;
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
		char big_one[ft_strlen(argv[1]) + ft_strlen(argv[2])];
		combine(big_one, argv[1], argv[2]);
		set_chars(big_one, chars);
		print_it(big_one, chars);
	}
	ft_putchar('\n');
	return (0);
}
