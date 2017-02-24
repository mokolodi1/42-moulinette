/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 10:37:04 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 10:51:32 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_collatz_conjecture(unsigned int base)
{
	if (base <= 1)
		return (0);
	if (base % 2 == 0)
		return (1 + ft_collatz_conjecture(base / 2));
	else
		return (1 + ft_collatz_conjecture(base * 3 + 1));
}
