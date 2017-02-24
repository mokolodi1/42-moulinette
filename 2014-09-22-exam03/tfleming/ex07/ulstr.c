/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 11:12:53 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 11:18:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putchar_rev_case(char c)
{
	if (c <= 'z' && c >= 'a')
		c += 'A' - 'a';
	else if (c <= 'Z' && c >= 'A')
		c -= 'A' - 'a';
	ft_putchar(c);
}

void		ft_putstr_rev_case(char *str)
{
	while (*str)
	{
		ft_putchar_rev_case(*str);
		str++;
	}
}

int			main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr_rev_case(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
