/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 22:09:09 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 23:12:38 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = (str[i] - 'A' + 42) % 26 + 'A';
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = (str[i] - 'a' + 42) % 26 + 'a';
		i++;
	}
	return (str);
}