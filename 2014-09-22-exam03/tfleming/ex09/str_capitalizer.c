/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 11:48:03 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 12:16:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putupper(char c)
{
	if (c <= 'z' && c >= 'a')
		c += 'A' - 'a';
	ft_putchar(c);
}

void		ft_putlower(char c)
{
	if (c <= 'Z' && c >= 'A')
		c -= 'A' - 'a';
	ft_putchar(c);
}

void		ft_putarg(char *str)
{
	int i;

	if (*str)
	{
		ft_putupper(*str);
		i = 1;
		while (str[i])
		{
			if (str[i - 1] == ' ')
				ft_putupper(str[i]);
			else
				ft_putlower(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	int		i;

	if (argc <= 1)
		ft_putchar('\n');
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_putarg(argv[i]);
			i++;
		}
	}
	return (0);
}
