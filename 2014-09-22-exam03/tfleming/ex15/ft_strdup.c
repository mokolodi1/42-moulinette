/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/20 14:04:15 by exam              #+#    #+#             */
/*   Updated: 2014/09/20 14:11:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*new_one;
	int		len;
	int		i;

	len = ft_strlen(src);
	new_one = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		new_one[i] = src[i];
		i++;
	}
	new_one[i] = '\0';
	return (new_one);
}
