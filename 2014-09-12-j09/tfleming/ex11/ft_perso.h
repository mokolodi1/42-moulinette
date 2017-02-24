/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 12:30:58 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 12:57:00 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			FT_PERSO_H
# define		FT_PERSO_H

# include		<string.h>

typedef enum	e_prof
{
	SAVE_AUSTIN_POWERS
}				t_prof;

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	t_prof	profession;
}				t_perso;

#endif
