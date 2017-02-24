/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 09:10:29 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 09:23:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

static void	change_chars(char *string)
{
	while (*string)
	{
		if (*string <= 'z' && *string >= 'a')
		{
			if (*string == 'z')
				*string = 'a';
			else
				*string += 1;
		}
		else if (*string <= 'Z' && *string >= 'A')
		{
			if (*string == 'Z')
				*string = 'A';
			else
				*string += 1;
		}
		string++;
	}
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr("\n");
	else
	{
		change_chars(argv[1]);
		ft_putstr(argv[1]);
		ft_putstr("\n");
	}
	return (0);
}
