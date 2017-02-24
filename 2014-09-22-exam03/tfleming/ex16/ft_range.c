/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 14:20:00 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 15:02:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

int			abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int			*ft_range(int start, int end)
{
	int		*new_one;
	int		i;
	int		assign;

	new_one = malloc(sizeof(int) * (abs(end) - abs(start) + 1));
	i = 0;
	assign = start;
	while (i <= abs(end - start))
	{
		new_one[i] = assign;
		if (start <= end)
			assign++;
		else
			assign--;
		i++;
	}
	return (new_one);
}
