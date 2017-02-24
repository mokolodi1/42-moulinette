/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 09:33:21 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 09:45:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SEEN_LENGTH		256

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_bzero(char *source, size_t length)
{
	size_t		i;

	i = 0;
	while (i < length)
	{
		source[i] = '\0';
		i++;
	}
}

int				contains(char *string, char c)
{
	while (*string)
	{
		if (*string == c)
			return (1);
		string++;
	}
	return (0);
}

void			inter(char *first, char *second)
{
	char		seen[SEEN_LENGTH];

	ft_bzero(seen, SEEN_LENGTH);
	while (*first)
	{
		if (!seen[(int)*first] && contains(second, *first))
		{
			ft_putchar(*first);
			seen[(int)*first] = 1;
		}
		first++;
	}
}

int				main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
