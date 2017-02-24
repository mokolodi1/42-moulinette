/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 18:49:48 by exam              #+#    #+#             */
/*   Updated: 2014/09/12 20:48:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"ft_list.h"

oid		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*old_one;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	if (cmp(data_ref, (*begin_list)->data) == 0)
	{
		old_one = *begin_list;
		(*begin_list) = (*begin_list)->next;
		free(old_one);
		if (*begin_list)
			ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else if ((*begin_list)->next != NULL)
	{
		ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
	}
}
