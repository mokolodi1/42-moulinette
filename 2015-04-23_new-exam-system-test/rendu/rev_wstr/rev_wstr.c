/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 09:45:27 by exam              #+#    #+#             */
/*   Updated: 2015/03/05 11:35:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void			ft_putchar(char c)
{
	write(1, &c, 1);
}

static void			ft_putstr_stop_space(char *string)
{
	while (*string && *string != ' ')
	{
		ft_putchar(*string);
		string++;
	}
}

static void			print_next_word_then_current(char *string)
{
	char			*this_word;

	this_word = string;
	while (*string && *string != ' ' && *string != '\t')
		string++;
	if (*string)
	{
		print_next_word_then_current(string + 1);
		ft_putchar(' ');
	}
	ft_putstr_stop_space(this_word);
}

int					main(int argc, char **argv)
{
	if (argc == 2)
		print_next_word_then_current(argv[1]);
	ft_putchar('\n');
	return (0);
}
