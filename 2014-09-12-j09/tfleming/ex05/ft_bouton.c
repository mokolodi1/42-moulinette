/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 23:02:25 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 23:05:41 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_bouton(int a, int b, int c)
{
	if (a > b)
	{
		if (b > c)
			return (b);
		else if (a > c)
			return (c);
		else
			return (a);
	}
	else
	{
		if (a > c)
			return (a);
		else if (b > c)
			return (c);
		else
			return (b);
	}
}
