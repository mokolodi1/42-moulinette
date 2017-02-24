/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 13:11:58 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 13:37:45 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			FT_DOOR_H
# define		FT_DOOR_H

# include		<unistd.h>

# define		OPEN			1
# define		CLOSED			0
# define		TRUE			1
# define		FALSE			0
# define		EXIT_SUCCESS	0

typedef int		t_bool;

typedef struct	s_door
{
	int		state;
}				t_door;

void			ft_putstr(char *str);
t_bool			open_door(t_door *door);
t_bool			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_closed(t_door *door);

#endif
