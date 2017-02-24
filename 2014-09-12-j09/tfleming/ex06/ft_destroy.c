/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 09:59:43 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 10:29:39 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_ultimator.h"
#include		<stdlib.h>

void			ft_destroy(char ***factory)
{
	int		outer;
	int		inner;

	outer = 0;
	while (factory && factory[outer] && factory[outer][0])
	{
		inner = 0;
		while (factory[outer] && factory[outer][inner])
		{
			free(factory[outer][inner]);
			inner++;
		}
		free(factory[outer]);
		outer++;
	}
	free(factory);
}
