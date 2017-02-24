/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 10:52:36 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 11:00:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	char	*thingy;
	int		i;

	if (argc == 2)
	{
		thingy = argv[1];
		i = 0;
		while (thingy[i])
		{
			if (i % 2 == 0)
				ft_putchar(thingy[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
