/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 13:03:46 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 13:37:40 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_door.h"

void			ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

t_bool			open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
	return (FALSE);
}

t_bool			close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSED;
	return (TRUE);
}

t_bool			is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state == OPEN);
}

t_bool			is_door_closed(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state == CLOSED);
}
