/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 18:17:18 by exam              #+#    #+#             */
/*   Updated: 2014/09/12 18:30:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_hidden(char *first, char *second)
{
	int		first_i;
	int		second_i;

	while (first[first_i] && second[second_i])
	{
		if (first[first_i] == second[second_i])
			second_i++;
		first_i++;
	}
	if (second[second_i] == '\0')
		return (1);
	else
		return (0);
}

int			main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (1);
	}
	if (is_hidden(argv[1], argv[2]))
		ft_putchar('1');
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
