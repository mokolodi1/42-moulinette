/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 18:32:35 by exam              #+#    #+#             */
/*   Updated: 2014/09/12 18:48:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdlib.h>

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strdup(char *src)
{
	char	*new_one;
	int		i;

	new_one = malloc(sizeof(char) * ft_strlen(src));
	i = 0;
	while (src[i])
	{
		new_one[i] = src[i];
		i++;
	}
	return (new_one);
}
