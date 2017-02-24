/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 19:08:16 by exam              #+#    #+#             */
/*   Updated: 2014/09/05 20:01:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		is_hidden(char *a, char *b)
{
	int a_count;
	int b_count;

	a_count = 0;
	b_count = 0;
	while (b[b_count] && a[a_count])
	{
		if (b[b_count] == a[a_count])
			a_count++;
		b_count++;
	}
	return (a[a_count] == '\0');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (is_hidden(argv[1], argv[2]))
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}
