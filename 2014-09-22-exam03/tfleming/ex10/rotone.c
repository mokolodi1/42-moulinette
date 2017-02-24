/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 12:18:35 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 13:14:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putchar_case(char c)
{
	if ((c < 'z' && c >= 'a') || (c < 'Z' && c >= 'A'))
		ft_putchar(c + 1);
	else if (c == 'Z')
		ft_putchar('A');
	else if (c == 'z')
		ft_putchar('a');
	else
		ft_putchar(c);
}

void		ft_putstr_case(char *str)
{
	while (*str)
	{
		ft_putchar_case(*str);
		str++;
	}
}

int			main(int argc, char **argv)
{
	if (argc >= 2)
		ft_putstr_case(argv[1]);
	ft_putchar('\n');
	return (0);
}
