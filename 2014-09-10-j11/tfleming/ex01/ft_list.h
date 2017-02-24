/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 19:48:45 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 13:59:40 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef					FT_LIST_H
# define				FT_LIST_H

# include				<stdlib.h>

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

t_list					*ft_create_elem(void *data);

#endif
