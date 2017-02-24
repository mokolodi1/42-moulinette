/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 18:17:50 by exam              #+#    #+#             */
/*   Updated: 2014/09/05 18:31:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putint(int a)
{
	if (a > 9)
		ft_putint(a / 10);
	ft_putchar((a % 10) + '0');
}

int		main(int argc, char **argv)
{
	argv++;
	ft_putint(argc - 1);
	ft_putchar('\n');
	return (0);
}
