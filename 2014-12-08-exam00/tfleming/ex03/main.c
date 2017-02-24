/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord_alphlong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 10:02:34 by exam              #+#    #+#             */
/*   Updated: 2014/12/04 12:03:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

/*
** ft_putstr("\n") there twice because I consider them seperate behaviour trees.
** Just a note: I'm going for bulletproofness here, not speed.
*/

int			main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr("\n");
	else
	{
		do_ord_alphlong(argv[1]);
		ft_putstr("\n");
	}
	return (0);
}
