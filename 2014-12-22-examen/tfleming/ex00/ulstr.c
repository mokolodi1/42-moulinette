/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 09:06:20 by exam              #+#    #+#             */
/*   Updated: 2014/12/18 09:13:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

char			reverse_case(char c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + 'a' - 'A');
	if (c <= 'z' && c >= 'a')
		return (c + 'A' - 'a');
	return (c);
}

void			reverse_cases(char *string)
{
	while (*string)
	{
		ft_putchar(reverse_case(*string));
		string++;
	}
}

int				main(int argc, char **argv)
{
	if (argc == 2)
	{
		reverse_cases(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
