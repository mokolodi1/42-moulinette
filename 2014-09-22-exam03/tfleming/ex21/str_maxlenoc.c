/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_maxlenoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 17:37:36 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 17:50:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>

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

int			test_in_strings(int ac, char **av)
{
	
}

int			main(int argc, char **argv)
{
	int		length;
	char	*start;
	int		i;
	int		try_len;

	i = 0;
	length = 0;
	while (argv[1][i] && i < strlen(argv[1]))
	{
		try_len = length + 1;
		while (argv[1][
	}
	i = 0;
	while (i < length)
	{
		ft_putchar(start + i);
	}
	ft_putchar('\n');
	return (0);
}
