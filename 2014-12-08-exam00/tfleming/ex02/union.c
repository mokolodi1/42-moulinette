/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 09:41:29 by exam              #+#    #+#             */
/*   Updated: 2015/02/09 13:57:49 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SEEN_LENGTH		256

/*
** ft_putstr("\n") there twice because I consider them seperate behaviour trees.
*/

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *string)
{
	size_t		i;

	i = 0;
	while (string[i])
	{
		ft_putchar(string[i]);
		i++;
	}
}

static void	print_unseen(unsigned char *string, unsigned char seen[SEEN_LENGTH])
{
	while (*string)
	{
		if (!seen[*string])
		{
			ft_putchar(*string);
			seen[*string] = 1;
		}
		string++;
	}
}

static void	print_union(unsigned char *first, unsigned char *second)
{
	unsigned char		seen[SEEN_LENGTH];
	size_t				i;

	i = 0;
	while (i < SEEN_LENGTH)
	{
		seen[i] = 0;
		i++;
	}
	print_unseen(first, seen);
	print_unseen(second, seen);
}

int			main(int argc, char **argv)
{
	if (argc != 3)
		ft_putstr("\n");
	else
	{
		print_union((unsigned char*)argv[1], (unsigned char*)argv[2]);
		ft_putstr("\n");
	}
	return (0);
}
