/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 19:02:17 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 19:15:36 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char		*am_pm(int hour)
{
	if (hour < 12)
		return ("A.M.");
	else
		return ("P.M.");
}

int			twelve_convert(int n)
{
	if (n == 0)
		return (12);
	return (n);
}

void		ft_takes_place(int hour)
{
	int a;
	int b;

	a = hour % 24;
	b = (hour + 1) % 24;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n"
		, twelve_convert(a % 12), am_pm(a)
		, twelve_convert(b % 12), am_pm(b));
}
