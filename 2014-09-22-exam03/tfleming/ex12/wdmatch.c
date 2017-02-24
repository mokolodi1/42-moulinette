/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 12:56:37 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 13:14:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

/*
**	Note: there are two valid interpretations to this problem, one that
**	reuses letters and one that does not.
*/

void		ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int			can_do_it(char *first, char *second)
{
	int		fi;
	int		si;

	fi = 0;
	while (second[si] && first[fi])
	{
		if (first[fi] == second[si])
			fi++;
		si++;
	}
	if (first[fi])
		return (0);
	else
		return (1);
}

int			main(int argc, char **argv)
{
	if (argc == 3 && can_do_it(argv[1], argv[2]))
		ft_putstr(argv[1]);
	ft_putstr("\n");
	return (0);
}
